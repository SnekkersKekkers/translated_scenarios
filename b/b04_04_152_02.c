BGOpen("ne320",0);
BGMPlay("BGM_PLACE_BALLING_DARTS",0.01);
ChLayout(1);
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,1);
ScrFadeIn(0);
VoicePlay("B040415202_04_000");
MsgDisp("Nanatsumori","So it's my turn.
Do you want to bet something on whether I
can get a bullseye?");
MsgSel("Then, I'll treat you to a drink.","You won't get it in!","Let me think what...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B040415202_04_010");
    MsgDisp("Nanatsumori","Alright.
I'll definitely get that drink, so get
ready, okay?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,4);
    ChMotion(4,0,1);
    VoicePlay("B040415202_04_020");
    MsgDisp("Nanatsumori","I'll get this in at any cost now...");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040415202_04_030");
        MsgDisp("Nanatsumori","Actually let's not.
That face you made got me down in the
dumps.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040415202_04_040");
        MsgDisp("Nanatsumori","ＯＫ.
Then, let's go.");
        SEPlay("EV_SE_086");
        Wait(15,1);
        SEPlay("EV_SE_869");
        ChEye(4,1);
        ChEyeOpenLevel(4,9);
        SEPlay("EV_SE_062");
        SEWait();
        ChEye(4,3);
        ChMouth(4,3);
        ChMotion(4,3,1);
        VoicePlay("B040415202_04_050");
        MsgDisp("Nanatsumori","There!
I got a double bullseye!");
        MsgDisp("主人公","Amazing!");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040415202_04_060");
        MsgDisp("Nanatsumori","Yay!
Alright, high five!");
        SEPlay("EV_SE_553",0,0.6);
        SEWait();
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,0,1);
        VoicePlay("B040415202_04_070");
        MsgDisp("Nanatsumori","Ahー, this feels nice.
So?
Have you decided on a prize for the wager?");
        MsgDisp("主人公","I'm still...");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,2,1);
        VoicePlay("B040415202_04_080");
        MsgDisp("Nanatsumori","Then, I'll think about it.
That's rightー......");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,0,1);
        ChMouthOpenLevel(4,0);
        VoicePlay("B040415202_04_090");
        MsgDisp("Nanatsumori","............");
        MsgDisp("主人公","It's surprisingly hard to think of
something, right?");
        ChEye(4,4);
        ChMouth(4,1);
        ChMotion(4,1,1);
        VoicePlay("B040415202_04_100");
        MsgDisp("Nanatsumori","No, I did think of something but...");
        MsgDisp("主人公","Eh, what?
Tell me.");
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,2,1);
        ChCheek(4,10);
        VoicePlay("B040415202_04_110");
        MsgDisp("Nanatsumori","I take back what I said.
Forget about the bet.
Let's stop.");
        MsgDisp("主人公","Is that okay?");
        ChEye(4,2);
        ChMouth(4,1);
        ChMotion(4,0,1);
        VoicePlay("B040415202_04_120");
        MsgDisp("Nanatsumori","Yeah.
If I told you this, I'd definitely regret
it.");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,2,1);
        VoicePlay("B040415202_04_130");
        MsgDisp("Nanatsumori","Haaa...
I'm quite the lecher.");
        MsgDisp("主人公","(Lecher?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    default :
    DbgAssert(0);
    break ;
    }
