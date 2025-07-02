BGOpen("sc510",0);
ChLayout(1);
BGMPlay("BGM_C22_HIKARU_A",0.01);
MsgClose();
ChOpen(22,254,0,0,3,-1,-1,0,0);
ScrFadeIn(0);
ChMotion(22,5,1);
VoicePlay("W012200000_22_000");
MsgDisp("Hikaru","There you are, Mari!");
MsgDisp("主人公","｛ひかる＊｝.
What's up?");
ChMotion(22,3,1);
VoicePlay("W012200000_22_010");
MsgDisp("Hikaru","Let's go to the amusement park this
Sunday♪ I got a bunch of
tickets.");
MsgDisp("主人公","｛ひかる＊｝, you want to go with me?");
ChMotion(22,4,1);
VoicePlay("W012200000_22_020");
MsgDisp("Hikaru","Ehehe, I'll invite other people.
Come on, come on, let's go～!");
MsgSel("Yeah, let's go！","Sorry, I have some errands to run");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(22,3);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("W012200000_22_030");
    MsgDisp("Hikaru","Yay!I'll look
forward to seeing you on Sunday▼");
    MsgDisp("主人公","(This Sunday, huh...
I wonder who else will come.)");
    break ;
    case 1:
    ChEye(22,2);
    ChMouth(22,0);
    ChMotion(22,0,1);
    VoicePlay("W012200000_22_040");
    MsgDisp("Hikaru","Aww～, that's too bad...
Alright then, I'll ask you another time.");
    MsgDisp("主人公","(I feel a little bad saying that
after she invited me.)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
