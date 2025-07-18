BGMPlay("BGM_SPORTS_DAY",0.01);
BGOpen("sc760",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,30,0,0,0,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O020100001_01_000");
    MsgDisp("Kazama","That was close.
It was a nice fight.");
    MsgDisp("主人公","(｛風真＊＊｝...
...But I wanted to win.)");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,30,0,0,2,#1,#1,0,0);
    ScrFadeIn(0);
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoiceEVSPlay(1);
    VoicePlay("O020100001_01_010");
    MsgDisp("Kazama","｛主人公｝, did you get hurt?");
    MsgDisp("主人公","I'm fine, but we lost...");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O020100001_01_020");
    MsgDisp("Kazama","If you're not hurt, then it's okay.");
    MsgDisp("主人公","It's not okay, it's frustrated.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O020100001_01_030");
    MsgDisp("Kazama","That's right, you're were serious about
this.
My bad.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O020100001_01_040");
    MsgDisp("Kazama","The dance is next, so maybe that will
cheer you up?");
    MsgDisp("主人公","(｛風真＊＊｝, thanks for encouraging
me...)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,30,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    MsgDisp("主人公","Ah, ｛風真＊＊｝, it was close,
but we lost.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O020100001_01_050");
    MsgDisp("Kazama","Aah, I was nervous, too.
More than if I was the one up there.");
    MsgDisp("主人公","Hehe.
｛風真＊＊｝, you're funny.");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O020100001_01_060");
    MsgDisp("Kazama","...Yeah.
After all, a smile suits you best.");
    MsgDisp("主人公","｛風真＊＊｝...
Thanks.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O020100001_01_070");
    MsgDisp("Kazama","C'mon, there's still the last event,
right?");
    MsgDisp("主人公","The folk dance!");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("O020100001_01_080");
    MsgDisp("Kazama","I'll definitely come for you, so just wait
for me.");
    MsgDisp("主人公","(｛風真＊＊｝, thank you...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
