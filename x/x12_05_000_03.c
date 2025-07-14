BGOpen("sc605",0);
MsgClose();
ChOpen(5,254,0,0,3,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like things have been going well
recently!)");
switch (ChPrmGet(5,6)){
    case 3:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("X120500003_05_000");
    MsgDisp("Hiiragi","It is because you are there working with
me, that I can overcome even the most
difficult of tasks. Thank you for always.");
    MsgDisp("主人公","(Yay!)");
    break ;
    case 4:
    case 5:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("X120500003_05_010");
    MsgDisp("Hiiragi","I believe that doing student council
activities with you, is the most sparkling
time within my high school life. Thank you
for always.");
    MsgDisp("主人公","(Yay! I was praised!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
