BGOpen("fp720",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","(The shop window is dirty...
Alright, let's wipe it!)");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,0,0,0,#1,#1,0,0);
    ChMouth(1,3);
    VoicePlay("I160100001_01_000");
    MsgDisp("Kazama","Oh, I'm impressed.");
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
I can't get rid of the dirt on the glass
well.");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("I160100001_01_010");
    MsgDisp("Kazama","I think the other side is dirty, right?");
    MsgDisp("主人公","...Ah.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("I160100001_01_020");
    MsgDisp("Kazama","It's good that we noticed.
Hang in there.");
    MsgDisp("主人公","(I'll have to think things through more.
Let's do our best and get praised next
time!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(The shop window is dirty...
Alright, let's wipe it!)");
    MsgClose();
    BGMPlay("BGM_C01_RYOUTA_A",0.01);
    ChOpen(1,35,0,0,3,#1,#1,0,0);
    ChMotion(1,3);
    VoicePlay("I160100001_01_030");
    MsgDisp("Kazama","Yeah, the storefront is the face of the
store. It's good that you wiped it as soon
as you noticed it.");
    MsgDisp("主人公","I'm glad!");
    ChEye(1,4);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I160100001_01_040");
    MsgDisp("Kazama","Little things like that are important to
the store's atmosphere.");
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("I160100001_01_050");
    MsgDisp("Kazama","Doing it without being told to...you're
suited for this work.");
    MsgDisp("主人公","(I did it!
｛風真＊＊｝ praised me.
I'm glad I did my best!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
