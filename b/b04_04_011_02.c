BGOpen("wf110",0);
ChLayout(1);
BGMPlay("BGM_PLACE_SHOP",0.01);
ChNanaType(#1);
ChEye(4,4);
ChMouth(4,3);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040401102_04_000");
MsgDisp("Nanatsumori","I like the atmosphere here.
It's just a bit, but I feel like I've
become an adult.");
MsgSel("I also like it!","I feel a bit out of place...","It fits ｛七ツ森＊｝ perfectly!");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(2);
    ChEye(4,4);
    ChMouth(4,2);
    ChMotion(4,4,1);
    VoicePlay("B040401102_04_010");
    MsgDisp("Nanatsumori","Shh, be quiet.
Maybe you should stretch yourself a bit
further?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    switch (ChPrmGet(4,6)){
        case 0:
        case 1:
        case 2:
        case 3:
        DateRateSet(1);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,1,1);
        ChEyeOpenLevel(4,7);
        VoicePlay("B040401102_04_020");
        MsgDisp("Nanatsumori","Why?
I don't get what you mean at all.");
        MsgDateResultDisp();
        ChEyeOpenLevel(4,#1);
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,1,1);
        ChEyeOpenLevel(4,7);
        VoicePlay("B040401102_04_030");
        MsgDisp("Nanatsumori","Why?");
        MsgDisp("主人公","｛七ツ森＊｝ is so
grown-up, it suits him, but I'm
completely——");
        SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
        ChClose(4,0,30);
        MsgClose();
        ChLayout(0);
        ChNanaType(#1);
        ChOpen(4,255,0,0,0,#1,#1,0,0,0,60);
        ChMotion(4,4,1);
        VoicePlay("B040401102_04_040");
        MsgDisp("Nanatsumori","Shh");
        MsgDisp("主人公","∈");
        ChEye(4,0);
        ChMouth(4,0);
        ChMotion(4,0,1);
        ChEyeOpenLevel(4,9);
        VoicePlay("B040401102_04_050");
        MsgDisp("Nanatsumori","So you haven't noticed.
Your own charm.");
        MsgDisp("主人公","Eh...");
        ChEye(4,0);
        ChMouth(4,3);
        ChMotion(4,3,1);
        VoiceEVSPlay(4);
        VoicePlay("B040401102_04_060");
        MsgDisp("Nanatsumori","... ｛主人公｝.
You really are a great girl.
Believe in yourself.");
        MsgDisp("主人公","｛七ツ森＊｝......");
        ChEye(4,0);
        ChMouth(4,0);
        ChMouthOpenLevel(4,0);
        ChCheek(4,10);
        VoicePlay("B040401102_04_070");
        MsgDisp("Nanatsumori","............");
        MsgClose();
        ChClose(4,0,30);
        MsgClose();
        SEPlay("EV_SE_544",0.01,0.5);
        ChLayout(1);
        ChNanaType(#1);
        ChOpen(4,255,0,0,0,#1,#1,10,0,0,60);
        ChMouth(4,3);
        ChMotion(4,2,1);
        VoicePlay("B040401102_04_080");
        MsgDisp("Nanatsumori","Crap.
This is quite embarrassing.");
        MsgDisp("主人公","Y-Yeah.");
        ChEye(4,2);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040401102_04_090");
        MsgDisp("Nanatsumori","I guess I'm still just a kid.
My my.");
        MsgDisp("主人公","(My heart is racing a bit...)");
        break ;
        default :
        DbgAssert(1);
        break ;
        }
    break ;
    case 2:
    DateRateSet(3);
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040401102_04_100");
    MsgDisp("Nanatsumori","Thanks.
You've also got good taste haven't you?");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
BGMStop();
