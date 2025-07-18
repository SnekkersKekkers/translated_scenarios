BGOpen("ar600",0);
ScrFadeIn(0);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    BGMPlay("BGM_C03_HONDA_A");
    ChOpen(3,35,1,0,3,#1,#1,0,0,0,5);
    VoicePlay("I260300000_03_120");
    MsgDisp("Honda","You can go on break.
I'll do the cash register.");
    MsgDisp("主人公","Ah, I'm still okay.
There are still customers, so at this
rate...");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("I260300000_03_130");
    MsgDisp("Honda","I know that work might be hard at first,
since you just started.");
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_140");
    MsgDisp("Honda","But you can't just try hard, you have to
rest properly, too.");
    MsgDisp("主人公","...Okay.
Then, can I leave the rest to you?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I260300000_03_150");
    MsgDisp("Honda","Of course!");
    MsgDisp("主人公","(I'll let myself be spoiled by
｛本多＊＊｝, and take a little
break.)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Is this...");
    MsgClose();
    BGMPlay("BGM_C03_HONDA_A");
    ChOpen(3,35,0,0,4,#1,#1,0,0,0,5);
    VoicePlay("I260300000_03_160");
    MsgDisp("Honda","Hm?
What's up?");
    MsgDisp("主人公","The other day, we did a \"Draw your
favorite person\" contest here, right?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("I260300000_03_170");
    MsgDisp("Honda","Yeah!
As a small, local bookstore, we need a
good reputation with the community!");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("I260300000_03_180");
    MsgDisp("Honda","...And, the manager planned the event,
right?
I heard a lot of people applied.");
    MsgDisp("主人公","Right.
About that, one of the little girls who
comes here often...");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5,1);
    VoicePlay("I260300000_03_190");
    MsgDisp("Honda","Ah!
Is this a portrait of you?
She captured your traits well!");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("I260300000_03_200");
    MsgDisp("Honda","This means that there are people who
recognize your hard work.");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("I260300000_03_210");
    MsgDisp("Honda","Even I didn't get a portrait, you know?");
    MsgDisp("主人公","(A portrait of someone you like...
Alright, let's work even harder!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
