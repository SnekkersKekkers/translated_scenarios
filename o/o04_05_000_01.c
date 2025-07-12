BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,30,0,2,2,9,#1,0,0);
    ScrFadeIn(0);
    ChEyeOpenLevel(5,0);
    VoicePlay("O040500001_05_000");
    MsgDisp("Hiiragi","We've lost. What a shame.");
    MsgDisp("主人公","(We lost......
I should've tried harder.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,30,4,2,4,0,#1,0,0);
    ScrFadeIn(0);
    ChEyeOpenLevel(5,9);
    VoicePlay("O040500001_05_010");
    MsgDisp("Hiiragi","Aah, a loss.
It's quite difficult to get them in.");
    MsgDisp("主人公","(We lost......
I should've tried harder.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,30,0,2,2,9,#1,0,0);
    ScrFadeIn(0);
    ChMotion(5,4);
    ChEyeOpenLevel(5,0);
    VoicePlay("O040500001_05_020");
    MsgDisp("Hiiragi","Hm,
I had wanted to celebrate with you.");
    MsgDisp("主人公","(We lost......
I should've tried harder.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
