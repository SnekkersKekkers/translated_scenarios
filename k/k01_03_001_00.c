BGMPlay("BGM_C03_HONDA_A");
BGOpen("sc230",0);
ChLayout(1);
MsgClose();
ChOpen(3,254,0,0,0,#1,#1,0,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgDisp("主人公","｛本多＊＊｝.");
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("K010300100_03_000");
    MsgDisp("Honda","Hm?
What's up?");
    MsgDisp("主人公","Today's your birthday, right?
Here, a present.");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("K010300100_03_010");
    MsgDisp("Honda","Huh, you remembered!?
Thank you!");
    ChSet(3,3);
    VoicePlay("K010300100_03_020");
    MsgDisp("Honda","Wow, I wonder what it is?");
    MsgDisp("主人公","Hehe, go ahead and open it.");
    break ;
    case 3:
    MsgDisp("主人公","｛本多＊＊｝.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("K010300100_03_030");
    MsgDisp("Honda","Yes?");
    MsgDisp("主人公","Today is your birthday right?
So, here.
Your present.");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(3,5);
    ChMouth(3,4);
    ChMotion(3,5);
    VoicePlay("K010300100_03_040");
    MsgDisp("Honda","Wah!
You remembered!?");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,0);
    VoicePlay("K010300100_03_050");
    MsgDisp("Honda","Someone other than your family remembering
your birthday...
It feels special.");
    MsgDisp("主人公","Hehe, if you'd like, open it up.");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","｛本多＊＊｝.");
    ChEye(3,1);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("K010300100_03_060");
    MsgDisp("Honda","Yaー hm, what's up?");
    MsgDisp("主人公","Ya?");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("K010300100_03_070");
    MsgDisp("Honda","...Da, you found me out.
I'll admit it, I've been waiting for you
all day today.");
    MsgDisp("主人公","Hehe, because it's your birthday?
Then, here.
This is your present.");
    SEPlay("EV_SE_664");
    SEWait();
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1);
    VoicePlay("K010300100_03_080");
    MsgDisp("Honda","Yay!
Hey, can I open it right now?");
    MsgDisp("主人公","Yeah, of course!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
