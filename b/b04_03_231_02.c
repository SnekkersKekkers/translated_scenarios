BGOpen("tr420",0);
BGMPlay("BGM_PLACE_AMUSEMENT",0.01);
MsgClose();
ChOpen(3,255,0,0,4,-1,-1,0,0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("B040323102_03_000");
MsgDisp("Honda","The accumulation and release of potential 
energy. It's a repetition of that cycle.");
MsgSel("Were you thinking of difficult things whilst riding?","Is that the secret to its popularity?","I see! Then, let's go on it again!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,4);
    VoicePlay("B040323102_03_010");
    MsgDisp("Honda","Well after all, when you think about
it, I feel like it makes the
fear fade away? ");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(3,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(3,2);
        ChMouth(3,0);
        ChMotion(3,2);
        VoicePlay("B040323102_03_020");
        MsgDisp("Honda","No, it's mainly about mechanical energy.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,4);
        VoicePlay("B040323102_03_030");
        MsgDisp("Honda","Well, I don't know.
To begin with, I can't really
understand it myself.");
        MsgDisp("主人公","Ah, sorry, did you dislike it?");
        ChEye(3,1);
        ChMouth(3,1);
        ChMotion(3,5);
        VoicePlay("B040323102_03_040");
        MsgDisp("Honda","Urkー, no.
If you're having fun, 
it's fine with me too.");
        ChEye(3,0);
        ChMouth(3,4);
        ChMotion(3,0);
        MsgDisp("主人公","But, that's lonely.");
        ChEye(3,4);
        ChMouth(3,4);
        ChMotion(3,4);
        VoicePlay("B040323102_03_050");
        MsgDisp("Honda","Why?
It's becasue I want to know more
] about the things you enjoy 
and are interested in.");
        ChEye(3,0);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040323102_03_060");
        MsgDisp("Honda","That's why, whether I like it
or not doesn't matter.");
        MsgDisp("主人公","It does matter.
It would be better 
if both of us had fun.");
        ChEye(3,5);
        ChMouth(3,4);
        ChMotion(3,5);
        VoicePlay("B040323102_03_070");
        MsgDisp("Honda","Ha... I see.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,1);
        VoicePlay("B040323102_03_080");
        MsgDisp("Honda","Then, let's go on the rollercoaster again.");
        MsgDisp("主人公","Ehhh?");
        ChEye(3,0);
        ChMouth(3,0);
        ChMotion(3,4);
        ChCheek(3,8);
        VoicePlay("B040323102_03_090");
        MsgDisp("Honda","Being able to be next to you 
while you're having fun...
That's what I want.");
        ChEye(3,3);
        ChMouth(3,3);
        ChMotion(3,3);
        ChEyeOpenLevel(3,0);
        ChCheek(3,8);
        VoicePlay("B040323102_03_100");
        MsgDisp("Honda","And so, I might come to like the
rollercoaster too. Come on, let's go!");
        MsgClose();
        ScrFadeOut(0,0);
        SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
        ChSet(3,2);
        ChCheek(3,0);
        MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
        MsgClose();
        SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
        SEWait();
        ScrFadeIn(0);
        MsgDisp("主人公","...How was it.");
        ChMouth(3,0);
        ChMotion(3,0);
        VoicePlay("B040323102_03_110");
        MsgDisp("Honda","As I thought... I think that's fine for
now.");
        MsgDisp("主人公","(｛本多＊＊｝, 
Thank you for challenging yourself.)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(1);
    ChEye(3,5);
    ChMouth(3,0);
    ChMotion(3,5);
    VoicePlay("B040323102_03_120");
    MsgDisp("Honda","Eh∋
You're not... serious, right?");
    MsgDateResultDisp();
    break ;
    default :
    DbgAssert(0);
    break ;
    }
