BGOpen("tr460",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChLayout(1);
MsgClose();
ChOpen(3,255,0,4,4,#1,#1,0,0,0,0);
ScrFadeIn(0);
VoicePlay("B040323502_03_000");
MsgDisp("Honda","I heard a scream just now, 
I wonder if they're alright?");
MsgSel("Seems like a staff helped them.","I didn't hear that voice?","Maybe that was my voice?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040323502_03_010");
    MsgDisp("Honda","Right, that's good.
It was a bit of a worrying sound.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,4);
    VoicePlay("B040323502_03_020");
    MsgDisp("Honda","I heard it perfectly but...
Could it have been... was it∋");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,1);
        VoicePlay("B040323502_03_030");
        MsgDisp("Honda","Your voice was really something. If you're
not good with this kind of thing, you
should tell me, okay?");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChSet(3,4);
        VoicePlay("B040323502_03_040");
        MsgDisp("Honda","Yeah, your voice was really
something. Did you not like it?");
        MsgDisp("主人公","That's not it.
My voice just came out on its own.");
        ChEye(3,4);
        ChMouth(3,3);
        ChMotion(3,0);
        VoicePlay("B040323502_03_050");
        MsgDisp("Honda","Cuteー.");
        MsgDisp("主人公","Eh?");
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,5);
        VoicePlay("B040323502_03_060");
        MsgDisp("Honda","Ah, sorry, sorry!
You were scared, why am I 
thinking about how cute you are.");
        MsgDisp("主人公","That's right, come on!");
        ChEye(3,4);
        ChMouth(3,0);
        ChMotion(3,4);
        ChCheek(3,5);
        VoicePlay("B040323502_03_070");
        MsgDisp("Honda","Huh?
Huh? Somethings tightening
up here in my chest.");
        MsgDisp("主人公","Eh, are you alright?");
        ChEye(3,5);
        ChMouth(3,4);
        ChMotion(3,5);
        ChCheek(3,10);
        VoicePlay("B040323502_03_080");
        MsgDisp("Honda","You and haunted houses...
It's chemistry!");
        MsgDisp("主人公","Ehh?");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,2);
        ChCheek(3,10);
        VoicePlay("B040323502_03_090");
        MsgDisp("Honda","They say love is a chemical reaction,
right? What's happening to my body?");
        MsgDisp("主人公","(｛本多＊＊｝, your face is red...
I wonder if he's alright?)");
        MsgClose();
        ScrFadeOut(0);
        ChCheek(3,0);
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
