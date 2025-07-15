BGOpen("wf330",0);
BGMPlay("BGM_PLACE_AQUA_DEEP",0.01);
ChLayout(1);
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,3,1);
ScrFadeIn(0);
VoicePlay("B040703302_07_000");
MsgDisp("Mikage","Then, tell me what you learned here.");
MsgSel("The adaptability of living things","About how to adapt to the dark.","I learned about delicious deep sea fish!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("B040703302_07_010");
    MsgDisp("Mikage","That's exactly it.
I can't refute a single word.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(7,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(7,2);
        ChMouth(7,3);
        ChMotion(7,1);
        VoicePlay("B040703302_07_020");
        MsgDisp("Mikage","Please talk about sea creatures.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,0);
        VoicePlay("B040703302_07_030");
        MsgDisp("Mikage","When you're in trouble, close your eyes
and count to ten. You'll get used to it.
That's adapting to the dark.");
        MsgDisp("主人公","Yes.
Are there any other adaptations?");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,2);
        VoicePlay("B040703302_07_040");
        MsgDisp("Mikage","Light adaptation is the opposite right?
And there's...
altitude adaptation, right?");
        ChEye(7,0);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040703302_07_050");
        MsgDisp("Mikage","That would be easier, right?");
        MsgDisp("主人公","Then, next time let's go somewhere high up
and count to 10 together?");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,3);
        VoicePlay("B040703302_07_060");
        MsgDisp("Mikage","Right!");
        ChEye(7,2);
        ChMouth(7,0);
        ChMotion(7,0);
        VoicePlay("B040703302_07_070");
        MsgDisp("Mikage","...Damn, that was too
instinctual.");
        MsgDisp("主人公","Eh?");
        ChEye(7,0);
        ChMouth(7,3);
        ChMotion(7,2);
        VoicePlay("B040703302_07_080");
        MsgDisp("Mikage","We're talking about adaptation.
It's scary to get accustomed to things.");
        MsgDisp("主人公","(...｛御影＊＊｝?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(4);
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("B040703302_07_090");
    MsgDisp("Mikage","There are a lot of high quality fish.
Idiot fish, blackthroat sea perch, aaah, I
want to eat it.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
}
