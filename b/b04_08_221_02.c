BGMPlay("BGM_PLACE_CASTLE",0.01);
BGOpen("tr320",0);
ChLayout(1);
ChEye(8,4);
ChMouth(8,0);
ChMotion(8,0);
ScrFadeIn(0);
VoicePlay("B040822102_08_000");
MsgDisp("Shirahane","How many times have I come here with you
now?");
MsgSel("Is this not the first time?","Why?","I don't mind how many times we come here.");
switch (MsgSelRsltGet()){
    case 0:
    switch (ChPrmGet(8,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(0);
        ChEye(8,2);
        ChMouth(8,2);
        ChMotion(8,4,1);
        VoicePlay("B040822102_08_010");
        MsgDisp("Shirahane","Do ya not remember our previous dates?
I'm kinda hurt...");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(8,0);
        ChMouth(8,4);
        ChMotion(8,0,1);
        ChEyeOpenLevel(8,10);
        VoicePlay("B040822102_08_020");
        MsgDisp("Shirahane","Are you foolin' around?
Or are you serious?");
        ChEye(8,4);
        ChMouth(8,4);
        ChMotion(8,2,1);
        VoicePlay("B040822102_08_030");
        MsgDisp("Shirahane","...But that's right, Everytime I come here
with you, it feels brand new.");
        ChEye(8,4);
        ChMouth(8,0);
        ChMotion(8,0,1);
        VoicePlay("B040822102_08_040");
        MsgDisp("Shirahane","In a way, everytime, might be \"our first
time\".");
        ChEye(8,3);
        ChMouth(8,0);
        ChCheek(8,5);
        VoicePlay("B040822102_08_050");
        MsgDisp("Shirahane","Thanks as always.");
        MsgDisp("主人公","Hehe!");
        ChEye(8,3);
        ChMouth(8,3);
        ChMotion(8,3,1);
        VoicePlay("B040822102_08_060");
        MsgDisp("Shirahane","If ya think about it like that, let's go
to lotsa different places, and keep
experiencing more of our \"firsts\"?");
        ChEye(8,3);
        ChMouth(8,0);
        ChMotion(8,2,1);
        ChEyeOpenLevel(8,0);
        ChCheek(8,8);
        VoicePlay("B040822102_08_070");
        MsgDisp("Shirahane","In other words...
Let's go on lotsa dates▼");
        MsgDisp("主人公","(｛大地＊＊｝......)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 1:
    DateRateSet(2);
    ChMotion(8,2,1);
    VoicePlay("B040822102_08_080");
    MsgDisp("Shirahane","I don't think it's really a place ta come
on a date. It's more like fer a class
field trip, right?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 2:
    DateRateSet(3);
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("B040822102_08_090");
    MsgDisp("Shirahane","That's right. If I'm with you, no matter
how many times we go to the same place,
it'll be enjoyable anyways?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
