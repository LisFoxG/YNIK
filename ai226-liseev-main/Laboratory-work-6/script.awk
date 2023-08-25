BEGIN{FS=":"}
{if (NR <= 125 && /^[l,L]/ ) {print $5}}
END{}
