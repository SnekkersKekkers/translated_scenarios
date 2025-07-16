BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
VoicePlay("B040103102_01_000");
MsgDisp("Kazama","I wonder what it looks like from the other
side of the glass?");
MsgSel("Then you'd be able to see the dolphins better","Maybe we'd want to be out in the world","Like if we were the keepers?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(1,3);
    ChMouth(1,3);
    ChMotion(1,3);
    VoicePlay("B040103102_01_010");
    MsgDisp("Kazama","Right?
They'd come right up to you and shoot a
bubble ring in your face.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    VoicePlay("B040103102_01_020");
    MsgDisp("Kazama","I think there was an animated film about
that awhile back.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(1,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,1);
        ChEyeOpenLevel(1,0);
        VoicePlay("B040103102_01_030");
        MsgDisp("Kazama","... Are you serious right now?
I was talking about like how the fish see
us.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,3);
        VoicePlay("B040103102_01_040");
        MsgDisp("Kazama","Are we talking about working now?
You say the most random things.");
        ChEye(1,3);
        ChMouth(1,2);
        MsgDisp("主人公","Was what I said really that weird...?");
        ChEye(1,2);
        ChMouth(1,3);
        ChMotion(1,0);
        ChEyeOpenLevel(1,9);
        VoicePlay("B040103102_01_050");
        MsgDisp("Kazama","I didn't say it was weird.
It's fine, it's fine.");
        MsgDisp("主人公","Really?");
        ChMotion(1,0,1);
        ChEyeOpenLevel(1,0);
        Wait(8,0);
        ChEye(1,0);
        ChMouth(1,3);
        VoicePlay("B040103102_01_060");
        MsgDisp("Kazama","Yeah, I mean it.
So, what about the keepers?");
        MsgDisp("主人公","Maybe they'd talk about how they see us.");
        ChEye(1,4);
        ChMouth(1,2);
        ChMotion(1,4);
        ChCheek(1,3);
        VoicePlay("B040103102_01_070");
        MsgDisp("Kazama","How they'd see us...
Like two lovers?");
        MsgDisp("主人公","Eh?");
        ChEye(1,4);
        ChMouth(1,1);
        ChMotion(1,3);
        ChCheek(1,7);
        VoicePlay("B040103102_01_080");
        MsgDisp("Kazama","Like lovers!");
        ChEye(1,2);
        ChMouth(1,2);
        ChMotion(1,0);
        ChEyeOpenLevel(1,0);
        ChCheek(1,10);
        SEPlay("EV_SE_GAYA_017",0.01,0.5);
        SEWait();
        MsgDisp("主人公","(｛風真＊＊｝'s voice got so loud...)");
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
