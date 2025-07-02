MsgDisp("主人公","It's the job interview!
Which company should I interview for?");
MsgSel("First-rate company.","Second-rate company.","Third-rate company.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","Of course, a first-rate company!
Let's get in a good company and be a
respectable adult!");
    break ;
    case 1:
    MsgDisp("主人公","I'll try a second-rate company.
It's better to play it safe.");
    break ;
    case 2:
    MsgDisp("主人公","I'll try a third-rate company.
For me, this is the best option.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
MsgClose();
ScrFadeOut(1,60);
