BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ScrFadeIn(0);
VoicePlay("B040603102_06_000");
MsgDisp("Himuro","Does it feel like... 
you're in the ocean?");
MsgSel("Yeah, of course!","An aquarium is an aquarium","Do you think that, ｛氷室＊＊｝?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040603102_06_010");
    MsgDisp("Himuro","Well, maybe that's a
normal perspective.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040603102_06_020");
    MsgDisp("Himuro","Heeh, that's pretty cold.
Unexpected amd interesting.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(6,1);
        ChMouth(6,1);
        ChMotion(6,4);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040603102_06_030");
        MsgDisp("Himuro","It's nonsensical to answer a
question with another question.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040603102_06_040");
        MsgDisp("Himuro","I don't feel like I'm in the sea.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0,1);
        VoicePlay("B040603102_06_050");
        MsgDisp("Himuro","I've thought this before but, 
don't aquariums just pander to people?");
        MsgDisp("主人公","Pander?");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040603102_06_060");
        MsgDisp("Himuro","They cram it with artificial stuff,
set up a mood, 
Then, well, expect us to enjoy it.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040603102_06_070");
        MsgDisp("Himuro","Well, that's my personal opinion.
I think it's fine for people who
enjoy it to enjoy it but...");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0,1);
        VoicePlay("B040603102_06_080");
        MsgDisp("Himuro","Today, I also had a little fun.");
        MsgDisp("主人公","Why?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040603102_06_090");
        MsgDisp("Himuro","...There was someone who was 
excited by my side.");
        MsgDisp("主人公","Eh.");
        ChEye(6,0);
        ChMouth(6,2);
        ChMotion(6,2);
        VoicePlay("B040603102_06_100");
        MsgDisp("Himuro","Your eyes were sparkling 
like a child's... it was dazzling.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,1);
        ChCheek(6,0);
        VoicePlay("B040603102_06_110");
        MsgDisp("Himuro","Maybe today I should look 
at you and not the fish?");
        MsgDisp("主人公","Ehh, we came all this way 
to the aquarium though?");
        ChEye(6,0);
        ChMouth(6,3);
        ChMotion(6,0);
        VoicePlay("B040603102_06_120");
        MsgDisp("Himuro","I'm free to look at what I want.
I won't listen to any objections. 
That's all.");
        MsgDisp("主人公","(Ugh... it's kind of embarrassing...)");
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
