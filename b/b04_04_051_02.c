BGOpen("wf510",0);
BGMStop();
ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040405102_04_000");
MsgDisp("Nanatsumori","Aren't there a lot of outrageous stories
about the constellations?");
MsgSel("Zeus was especially bad.","I don't think so","Surprisingly, you've actually been seriously listening?");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,4);
    ChMotion(4,1,1);
    VoicePlay("B040405102_04_010");
    MsgDisp("Nanatsumori","I feel the same. He was messing things up
here and there. And he used the
constellations to cover up his tracks.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(2);
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("B040405102_04_020");
    MsgDisp("Nanatsumori","Hmm...
Are you the type to find it romantic?");
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
        ChMotion(4,1,1);
        VoicePlay("B040405102_04_030");
        MsgDisp("Nanatsumori","That was a rude way to put it.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040405102_04_040");
        MsgDisp("Nanatsumori","I don't sleep every time I come here,
after all.");
        MsgDisp("主人公","Ah, sorry...");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,2,1);
        ChCheek(4,8);
        VoicePlay("B040405102_04_050");
        MsgDisp("Nanatsumori","Actually, it'll be pretty bad if I don't
focus on the commentary");
        MsgDisp("主人公","Why?");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,0,1);
        ChCheek(4,0);
        VoicePlay("B040405102_04_060");
        MsgDisp("Nanatsumori","...Okay, try imagining this.");
        MsgDisp("主人公","Yeah.");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,2,1);
        ChEyeOpenLevel(4,0);
        VoicePlay("B040405102_04_070");
        MsgDisp("Nanatsumori","In the dim light of the starry sky, the
romantic stories of constellations tickles
my ears.");
        MsgDisp("主人公","Yeah...");
        VoicePlay("B040405102_04_080");
        MsgDisp("Nanatsumori","There are also lots of love stories.");
        MsgDisp("主人公","Yeah..");
        ChMotion(4,0,1);
        VoicePlay("B040405102_04_090");
        MsgDisp("Nanatsumori","The beautiful story of a man and a woman
coincides with our own.");
        MsgDisp("主人公","Yeah...");
        ChEye(4,0);
        VoicePlay("B040405102_04_100");
        MsgDisp("Nanatsumori","In that dream like state, I look over next
to me...");
        MsgDisp("主人公","Yeah...
Hm?");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,2,1);
        ChMouthOpenLevel(4,0);
        ChCheek(4,10);
        VoicePlay("B040405102_04_110");
        MsgDisp("Nanatsumori","............");
        ChEye(4,4);
        ChMouth(4,2);
        ChCheek(4,10);
        VoicePlay("B040405102_04_120");
        MsgDisp("Nanatsumori","It's hard to exhibit self-restraint.");
        MsgDisp("主人公","(???)");
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
