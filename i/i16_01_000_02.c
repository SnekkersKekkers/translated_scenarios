BGOpen("fp720",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","These are the recommended products today.");
    VoicePlay("I160100002_47_000");
    MsgDisp("Woman Customer","What color do you recommend?");
    MsgDisp("主人公","Let's see......
Personally, I have the pink shade.
The other colors-");
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,0,0,0,#1,#1,0,0);
    VoicePlay("I160100002_01_000");
    MsgDisp("Kazama","Good work.
That last customer looked like she was
having a good time.");
    MsgDisp("主人公","Really?");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I160100002_01_010");
    MsgDisp("Kazama","It's because you looked like you were
having fun too.
Keep it up.");
    MsgDisp("主人公","(Thank goodness.
Let's keep doing our best!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","This is a popular item right now.
There are a lot of different colors, so
please take your time.");
    VoicePlay("I160100002_47_010");
    MsgDisp("Woman Customer","Thank you.
What color do you recommend?");
    MsgDisp("主人公","For you, I think bright colors would be
best.
What do you think of lemon yellow?");
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,0,0,0,#1,#1,0,0);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("I160100002_01_020");
    MsgDisp("Kazama","Good work.
That recommendation you just gave was
really good.");
    MsgDisp("主人公","Really?");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I160100002_01_030");
    MsgDisp("Kazama","You gave her advice and left it up to her
instead of pushing it.
It was really natural.");
    MsgDisp("主人公","(I did it!
｛風真＊＊｝ praised me.
Let's keep doing our best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
