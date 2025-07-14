BGOpen("ar200",0);
ChLayout(1);
ScrFadeIn(0);
MsgClose();
BGMPlay("BGM_C06_INORI_A",0.01);
ChOpen(6,35,0,0,0,#1,#1,0,0);
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","Hm...... that one doesn't seem well.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,5);
    VoicePlay("I460600001_06_000");
    MsgDisp("Himuro","You're right.
Maybe it wasn't watered enough.");
    MsgDisp("主人公","Should we check the other flowers and
report to the manager?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,3);
    VoicePlay("I460600001_06_010");
    MsgDisp("Himuro","\"Should we\"?
It's a given.
I'll check over there, you do over here.");
    MsgDisp("主人公","Okay!");
    MsgClose();
    ScrFadeOut(0);
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ScrFadeIn(0);
    MsgDisp("主人公","Our manager's amazing.
The flowers are just getting better and
better.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600001_06_020");
    MsgDisp("Himuro","They're a pro.");
    MsgDisp("主人公","I wonder if we can learn that technique,
too?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("I460600001_06_030");
    MsgDisp("Himuro","Learning things halfway will just lead to
disaster.");
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("I460600001_06_040");
    MsgDisp("Himuro","But your will to learn isn't bad. And your
view isn't either. Excellent.");
    MsgDisp("主人公","(｛氷室＊＊｝ praised me!)");
    break ;
    case 4:
    case 5:
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    VoicePlay("I460600001_06_050");
    MsgDisp("Himuro","Sales have gone up ever since
you joined.");
    MsgDisp("主人公","Huh, I wonder why?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600001_06_060");
    MsgDisp("Himuro","Your customer service, right?
Always smiling and butting in with advice.");
    MsgDisp("主人公","That doesn't sound like
a compliment......");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("I460600001_06_070");
    MsgDisp("Himuro","It is.
......I'm jealous.");
    MsgDisp("主人公","Hm?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("I460600001_06_080");
    MsgDisp("Himuro","I don't have that kind of charm.
I'll need to learn.");
    ChEye(6,1);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("I460600001_06_090");
    MsgDisp("Himuro","But, in your case, I think a little less
sociability might do you some good.");
    MsgDisp("主人公","Huh, why?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChCheek(6,10);
    VoicePlay("I460600001_06_100");
    MsgDisp("Himuro","Some people might get
the wrong idea.");
    MsgDisp("主人公","Wrong idea......?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,1);
    VoicePlay("I460600001_06_110");
    MsgDisp("Himuro","It's fine if you don't get it.");
    MsgDisp("主人公","(......I wonder what he meant?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChCheek(6,0);
