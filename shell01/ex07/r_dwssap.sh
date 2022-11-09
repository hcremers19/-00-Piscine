cat /etc/passwd | grep -v \# | awk 'NR % 2 == 0' | sed 's/:.*//g' | rev | sort -dr | head -$FT_LINE2 | tail +$FT_LINE1 | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/\./' | tr -d '\n'
