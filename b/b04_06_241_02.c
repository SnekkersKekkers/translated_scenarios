BGOpen("tr510",0);
ChLayout(1);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
ScrFadeIn(0);
VoicePlay("B040624102_06_000");
MsgDisp("Himuro","That horse over there is pure white.
It's a splendid white horse.");
MsgSel("It's the type a prince will ride.","I wonder if it's a special horse?","You're right! Let's take a picture∈");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(6,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(6,1);
        ChMouth(6,0);
        ChMotion(6,0);
        ChEyeOpenLevel(6,0);
        VoicePlay("B040624102_06_010");
        MsgDisp("Himuro","Prince charming... right.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040624102_06_020");
        MsgDisp("Himuro","Are you dreaming? 
Prince Charming?");
        MsgDisp("主人公","I wonder?");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0);
        VoicePlay("B040624102_06_030");
        MsgDisp("Himuro","Hmm...Then maybe 
I'll try horseriding.");
        MsgDisp("主人公","Hehe, sounds good.");
        ChEye(6,0);
        ChMouth(6,4);
        ChMotion(6,0,1);
        VoicePlay("B040624102_06_040");
        MsgDisp("Himuro","If I rode that horse, 
I'm interested to see what 
kind of reaction you would have.");
        MsgDisp("主人公","Would you become prince charming");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,4);
        ChCheek(6,10);
        VoicePlay("B040624102_06_050");
        MsgDisp("Himuro","It won't become 
that embarrasing.");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,0);
        VoicePlay("B040624102_06_060");
        MsgDisp("Himuro","...But, 
if you insist...");
        MsgDisp("主人公","Really?");
        ChEye(6,0);
        ChMouth(6,0);
        ChMotion(6,5);
        VoicePlay("B040624102_06_070");
        MsgDisp("Himuro","It was a joke, I'm kidding.
I was just going along with the
flow of the conversation!");
        MsgDisp("主人公","I see.");
        ChEye(6,0);
        ChMouth(6,2);
        ChMotion(6,4);
        VoicePlay("B040624102_06_080");
        MsgDisp("Himuro","...Let's leave 
it at that for now.");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("B040624102_06_090");
    MsgDisp("Himuro","It's the only white one,
So, I guess it is special.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(6,0);
    ChMouth(6,3);
    ChMotion(6,0);
    VoicePlay("B040624102_06_100");
    MsgDisp("Himuro","You're too frantic.
I don't dislike that about you though.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
