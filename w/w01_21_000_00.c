BGOpen("sc510",0);
ChLayout(1);
BGMPlay("BGM_C21_MICHIRU_A",0.01);
MsgClose();
Wait(15,0);
ChOpen(21,254,3,0,4,#1,#1,0,0);
ScrFadeIn(0);
VoicePlay("W012100000_21_000");
MsgDisp("Michiru","Mari.
Have a second?");
MsgDisp("主人公","｛みちる＊｝.
What's up?");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
VoicePlay("W012100000_21_010");
MsgDisp("Michiru","Why don't we go to the amusement park this
Sunday?
I have some tickets...");
MsgDisp("主人公","Just the two of us, ｛みちる＊｝?");
ChEye(21,4);
ChMouth(21,0);
ChMotion(21,4);
VoicePlay("W012100000_21_020");
MsgDisp("Michiru","Nope. I'm inviting other people but who
they are is a secret. ...How about it?");
MsgSel("Yeah, let's go!","Sorry, I've got some errands to run.");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(21,0);
    ChMouth(21,3);
    ChMotion(21,3);
    VoicePlay("W012100000_21_030");
    MsgDisp("Michiru","Thank goodness.
Then, I'll look forward to seeing you this
Sunday.");
    MsgDisp("主人公","(This Sunday, huh...
I wonder who else will be coming.)");
    break ;
    case 1:
    ChEye(21,4);
    ChMouth(21,4);
    ChMotion(21,0);
    VoicePlay("W012100000_21_040");
    MsgDisp("Michiru","I see, errands huh.
Maybe next time, then.
Okay?");
    MsgDisp("主人公","(I feel a little bad saying that after she
invited me.)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
