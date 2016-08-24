cat /etc/passwd | cut -d: -f 1 | grep -v '^#' | awk '{if(NR%2==0) print $0}'| rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | sed "s/^/ /" | tr "\n" "," | sed "s/,$/./" | cut -c 2- | tr -d "\n"
