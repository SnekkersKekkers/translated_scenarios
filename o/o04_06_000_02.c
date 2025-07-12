BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(6,30,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040600002_06_000");
    MsgDisp("Himuro","Hm......
Well, we were just one away.");
    MsgDisp("主人公","(A draw, huh......
But, it was a good match.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(6,30,0,0,4,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040600002_06_010");
    MsgDisp("Himuro","Well, wasn't it a good match?
The other team was also
getting desperate.");
    MsgDisp("主人公","(A draw, huh......
But, it was a good match.)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(6,30,2,2,0,0,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040600002_06_020");
    MsgDisp("Himuro","I should've tried a
little harder...... Haa.");
    MsgDisp("主人公","(A draw, huh......
But, it was a good match.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(6,0,0);
