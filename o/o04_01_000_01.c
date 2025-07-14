BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,30,0,2,2,0,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040100001_01_000");
    MsgDisp("Kazama","......Geez, what was that?");
    MsgDisp("主人公","(Aah, too bad......)");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,30,0,2,2,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(1,1);
    VoicePlay("O040100001_01_010");
    MsgDisp("Kazama","We lost even though we're together?
They must've counted wrong.");
    MsgDisp("主人公","(Hm......
Even though I did my best......)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,30,0,2,2,#1,#1,0,0);
    ScrFadeIn(0);
    ChMouth(1,3);
    ChEyeOpenLevel(1,#1);
    VoicePlay("O040100001_01_020");
    MsgDisp("Kazama","If this was a pair competition, we
would've won.");
    MsgDisp("主人公","(Hm. It's frustrating......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
