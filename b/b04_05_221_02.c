BGOpen("tr320",0);
BGMPlay("BGM_PLACE_CASTLE",0.01);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040522102_05_000");
MsgDisp("Hiiragi","I've been given the honor to use this
place as a setting in my plays, so I think
I'm always on edge here.");
MsgSel("The lords would definitely be happy!","｛柊＊＊＊｝ is starting to look like a lord...","Relax a bit?");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(5,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(5,2);
        ChMouth(5,4);
        ChMotion(5,1);
        ChEyeOpenLevel(5,0);
        VoicePlay("B040522102_05_010");
        MsgDisp("Hiiragi","No matter how much you say it, I will
never believe it to be true.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(5,2);
        ChMouth(5,2);
        ChMotion(5,4);
        ChEyeOpenLevel(5,0);
        VoicePlay("B040522102_05_020");
        MsgDisp("Hiiragi","Haa...
I wonder how?");
        ChMotion(5,0);
        ChEyeOpenLevel(5,#1);
        VoicePlay("B040522102_05_030");
        MsgDisp("Hiiragi","My theatre production differs in both
historical fact and interpretation. I
wonder if they would take offense to it...");
        MsgDisp("主人公","No, I don't think so. There were a lot of
people who watched the play for the first
time and developed a interest in the
history?");
        ChMouth(5,4);
        ChMotion(5,4);
        VoicePlay("B040522102_05_040");
        MsgDisp("Hiiragi","That may be true...");
        MsgDisp("主人公","The number of visitors to this castle has
increased. It's thanks to
｛柊＊＊＊｝ and everyone.");
        ChEye(5,4);
        ChMotion(5,0);
        VoicePlay("B040522102_05_050");
        MsgDisp("Hiiragi","When you say that, I feel as if I was of
help in some small way.");
        ChEye(5,4);
        ChMouth(5,0);
        ChMotion(5,2);
        ChEyeOpenLevel(5,0);
        VoicePlay("B040522102_05_060");
        MsgDisp("Hiiragi","As chairman of Habataki Theatre troupe, I
once again express my gratitude to the
many generations of lords here.");
        ChMouthOpenLevel(5,0);
        VoicePlay("B040522102_05_070");
        MsgDisp("Hiiragi","......");
        VoicePlay("B040522102_43_000");
        MsgDisp("Castle Lord's Voice?","You should proceed on your own path
without hesitation.");
        MsgDisp("主人公","...Huh?
Just now...");
        ChEye(5,4);
        ChMouth(5,2);
        ChMotion(5,0);
        ChEyeOpenLevel(5,#1);
        ChMouthOpenLevel(5,#1);
        VoicePlay("B040522102_05_080");
        MsgDisp("Hiiragi","Just now?");
        MsgDisp("主人公","Ah, no.");
        ChEye(5,3);
        ChMouth(5,3);
        VoicePlay("B040522102_05_090");
        MsgDisp("Hiiragi","Thank you, thanks to you, I feel as if a
load has been lifted off my chest.");
        MsgDisp("主人公","(That strange voice just now...could it
have been...?)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(4);
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("B040522102_05_100");
    MsgDisp("Hiiragi","Is that so?
Even without the costume?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(5,4);
    VoicePlay("B040522102_05_110");
    MsgDisp("Hiiragi","That's right.
But I am grateful to the generations of
lords and their ancestors.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
