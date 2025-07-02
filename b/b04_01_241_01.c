BGOpen("tr510",0);
ChLayout(1);
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ScrFadeIn(0);
ChMotion(1,1);
VoicePlay("B040124101_01_000");
MsgDisp("Kazama","The air here seems to be clear.");
MsgSel("Let's take a deep breath!","There's even a sheep shearing experience!","They're even asking for suggestions for names of baby sheep!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(1);
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    ChEyeOpenLevel(1,0);
    VoicePlay("B040124101_01_010");
    MsgDisp("Kazama","Phewー...
Thanks to you, I inhaled the smell of 
the animals with all of my might.");
    MsgDateResultDisp();
    break ;
    case 1:
    DateRateSet(3);
    ChEye(1,0);
    ChMouth(1,3);
    ChMotion(1,3);
    ChEyeOpenLevel(1,8);
    VoicePlay("B040124101_01_020");
    MsgDisp("Kazama","Nice! Are you the one doing it?
Just imagining it is fun.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(2);
    ChEye(1,0);
    ChMouth(1,0);
    ChMotion(1,0);
    ChEyeOpenLevel(1,8);
    VoiceEVSPlay(1);
    VoicePlay("B040124101_01_030");
    MsgDisp("Kazama","｛主人公｝.
With that, it's settled right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
