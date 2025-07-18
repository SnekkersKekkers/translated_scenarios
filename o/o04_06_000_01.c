BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,30,2,1,0,0,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040600001_06_000");
    MsgDisp("Himuro","Everyone had no control.");
    MsgDisp("主人公","(We lost...
I should've tried a little harder.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,30,2,2,0,0,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040600001_06_010");
    MsgDisp("Himuro","The other team had too much momentum.
...Haa.");
    MsgDisp("主人公","(We lost...
I should've tried a little harder.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,30,0,2,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040600001_06_020");
    MsgDisp("Himuro","Are you kidding?
Was there a miscount?
Even though I threw all that in?");
    MsgDisp("主人公","(We lost...
I should've tried a little harder.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
