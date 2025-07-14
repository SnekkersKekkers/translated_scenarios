BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,30,3,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030200000_02_000");
    MsgDisp("Sassa","Alright, we're first place!");
    MsgDisp("主人公","Yeah, we did it!");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("O030200000_02_010");
    MsgDisp("Sassa","We were perfectly in sync!");
    MsgDisp("主人公","(I did it!
I'm glad I did my best!)");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,30,3,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030200000_02_020");
    MsgDisp("Sassa","Alright, first!
We did pretty well together.");
    MsgDisp("主人公","I did my best!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    VoicePlay("O030200000_02_030");
    MsgDisp("Sassa","Yeah, you've got guts.
Isn't that nice?");
    MsgDisp("主人公","(I did it!
I'm glad I did my best!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,30,3,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O030200000_02_040");
    MsgDisp("Sassa","Yay!
We got the gold medal!");
    MsgDisp("主人公","Yeah, we did it!");
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("O030200000_02_050");
    MsgDisp("Sassa","I'm already at the point where I could
live like this.
Aren't you the best partner for me?");
    MsgDisp("主人公","(I did it!
I'm glad I did my best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
