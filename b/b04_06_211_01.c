BGOpen("tr210",0);
ChLayout(1);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
ChEye(6,0);
ChMouth(6,0);
ScrFadeIn(0);
ChMotion(6,4,1);
VoicePlay("B040621101_06_000");
MsgDisp("Himuro","Aren't these enclosures just proof of
human ego?");
MsgSel("But it would be an issue if they escaped...","Maybe a safari park would be better","Ego is fine!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    ChEyeOpenLevel(6,0);
    VoicePlay("B040621101_06_010");
    MsgDisp("Himuro","But that reasoning is for our own
convenience too.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,4);
    ChMotion(6,0);
    VoicePlay("B040621101_06_020");
    MsgDisp("Himuro","Yeah, that would probably be less
stressful. It's better if the animals are
more relaxed. And for the people looking
too.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040621101_06_030");
    MsgDisp("Himuro","That's a complete shift in attitude.
In a way, I'm jealous.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
