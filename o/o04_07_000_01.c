MsgClose();
BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
ChOpen(7,37,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("O040700001_07_000");
    MsgDisp("Mikage","It's too bad,
but wasn't it still fun?");
    MsgDisp("主人公","(Aah, we lost......)");
    break ;
    case 3:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("O040700001_07_010");
    MsgDisp("Mikage","So we lost.
Yeah, you did your best.");
    MsgDisp("主人公","(Haa, we lost......)");
    break ;
    case 4:
    case 5:
    ChEye(7,2);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("O040700001_07_020");
    MsgDisp("Mikage","We were close.
But, I had fun. Thanks.");
    MsgDisp("主人公","(Aah, we lost.
Too bad......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
