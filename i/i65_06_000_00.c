BGOpen("ar300",0);
ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    SEPlay("EV_SE_589");
    Wait(50,0);
    MsgDisp("主人公","Thank you very much!");
    MsgDisp("主人公","(Haa, and now we need detergent for the
car wash...)");
    VoicePlay("I650600000_06_000");
    MsgDisp("Himuro?","Hm, so you're working here?");
    MsgClose();
    SEStop("EV_SE_589",1);
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.
What's up?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I650600000_06_010");
    MsgDisp("Himuro","I was taking a walk when I thought I heard
a familiar voice somewhere.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("I650600000_06_020");
    MsgDisp("Himuro","Well, work hard.
... Bye.");
    MsgClose();
    BGMStop();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    MsgClose();
    ChClose(6);
    SEWait();
    MsgDisp("主人公","(He went out of his way to come in.
I wonder if he was checking on me?)");
    break ;
    case 3:
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    MsgClose();
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("I650600000_06_030");
    MsgDisp("Himuro","Wow...
You working hard?");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I650600000_06_040");
    MsgDisp("Himuro","Isn't the work here pretty tiring?");
    MsgDisp("主人公","Right.
But it's worth doing.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0,1);
    VoicePlay("I650600000_06_050");
    MsgDisp("Himuro","Hm, I see.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I650600000_06_060");
    MsgDisp("Himuro","Well, just don't overdo it.
... Bye.");
    MsgClose();
    BGMStop();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    MsgClose();
    ChClose(6);
    SEWait();
    MsgDisp("主人公","(Did he come to check on me?
If so, I'm happy.)");
    break ;
    case 4:
    case 5:
    SEPlay("EV_SE_589");
    Wait(50,0);
    MsgDisp("主人公","Thank you very much!");
    MsgClose();
    SEStop("EV_SE_589",1);
    BGMPlay("BGM_C06_INORI_A",0.01);
    ChOpen(6,255,0,0,0,#1,#1,0,0);
    VoicePlay("I650600000_06_070");
    MsgDisp("Himuro","...Hello.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("I650600000_06_080");
    MsgDisp("Himuro","Still have lots of energy?");
    MsgDisp("主人公","Hm, what's up?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("I650600000_06_090");
    MsgDisp("Himuro","You're loud.
It's echoing onto the road.");
    MsgDisp("主人公","Huh, really?
I always try to greet people cheerfully,
so...");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I650600000_06_100");
    MsgDisp("Himuro","Hm.
Customer service is tough.");
    SEPlay("EV_SE_659",0,0.8);
    SEWait();
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("I650600000_06_110");
    MsgDisp("Himuro","Well, here.
I had this leftover, so take it.");
    MsgDisp("主人公","Huh... a throat lozenge?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,5);
    VoicePlay("I650600000_06_120");
    MsgDisp("Himuro","Right.
Since it's over for you if you lose your
voice.");
    MsgDisp("主人公","Hehe, thank you!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("I650600000_06_130");
    MsgDisp("Himuro","You're welcome.
... Bye.");
    MsgClose();
    BGMStop();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    MsgClose();
    ChClose(6);
    SEWait();
    MsgDisp("主人公","(I got a throat lozenge.
Alright, let's eat it and keep working!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChCheek(6,0);
