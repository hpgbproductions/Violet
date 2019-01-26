[Variables]

; name: site title to display
; home: url to site main or news page
;  url: feed address
;  reg: regexp for article title and content
;  upd: regexp for article upload time

; the separation of the timestamp locater from the article means that the timestamp can be anywhere in the section
; main capture order: article title, article page, article content

1name=cmg-simplestuff
1home=https://cmg-simplestuff.deviantart.com
1url=https://backend.deviantart.com/rss.xml?type=deviation&q=by%3Acmg-simplestuff+sort%3Atime+meta%3Aall
1reg=(?siU)<item>.*<title>(.*)</title>.*<link>(.*)</link>.*type="html">(.*)</media:description>
1upd=(?siU)<item>.*<pubDate>(.*)</pubDate>

2name=pixiv info
2home=https://pixiv.net
2url=https://www.pixiv.net/info.php?mode=atom&lang=en
2reg=(?siU)<entry>.*<title>(.*)</title>.*<id>(.*)</id>.*html">\n(.*)</content>
2upd=(?siU)<entry>.*<updated>(.*)</updated>

3name=TSUKI Project
3home=https://systemspace.link
3url=https://systemspace.link/api/news-feed-atom.php
3reg=(?siU)<entry>.*<title>(.*)</title>.*<id>(.*)</id>.*/xhtml'>(.*)</div>
3upd=(?siU)<entry>.*<updated>(.*)</updated>

4name=slot 4
4home=
4url=
4reg=
4upd=

5name=slot 5
5home=
5url=
5reg=
5upd=

6name=slot 6
6home=
6url=
6reg=
6upd=

7name=slot 7
7home=
7url=
7reg=
7upd=

8name=slot 8
8home=
8url=
8reg=
8upd=
