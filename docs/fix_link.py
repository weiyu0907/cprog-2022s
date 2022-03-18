import re, os, sys

re_a = re.compile(r"<div class=\"source\">.*\.m4a.*</a></div>")
re_s = re.compile(r"href=\"(.*)\"")
re_lab = re.compile(r'<a href="https://www\.notion\.so/(.+)">\[(課堂練習.+)]')

def main(name):
    fh = open(name,encoding="utf-8") 
    text = ""
    for line in fh:
        text+=line
    fh.close()
    ofn = name.replace(".html","-link.html")
    match = re_lab.findall(text)
    for m in match:
        print(m)
        print()

    # text = text.replace("</body>",radio_play)
    # fh = open(ofn, 'w', encoding='UTF-8')
    # fh.write(text)
    # fh.close()

if __name__=="__main__":
    if len(sys.argv)==2:
        main(sys.argv[1])
    else:
        print("\nUsage : fix_link.py <html-file-name>\n")
    