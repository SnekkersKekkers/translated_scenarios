MsgDisp("主人公","It's time for university exams!
Which exam should I take?");
MsgSel("First-rate university.","Second-rate university,","Third-rate university.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Of course, a first-rate university!
I should aim as high as I can for
my higher education.");
    break ;
    case 1:
    MsgDisp("主人公","I'll try a second-rate university.
It's better to play it safe.");
    break ;
    case 2:
    MsgDisp("主人公","I'll try a third-rate university.
If I aim too high, it'll just be harder
for me if I get in.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(1,60);
