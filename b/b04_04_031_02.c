BGOpen("wf310",0);
BGMPlay("BGM_PLACE_MUSE_AQUA_GARDEN",0.01);
ChLayout(1);
ChEyeOpenLevel(4,#1);
ChMouthOpenLevel(4,#1);
ChCheek(4,0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B040403102_04_000");
MsgDisp("Nanatsumori","What?
There's a queue over there.
...Shall we go?");
MsgSel("There's a sushi restaurant there, let's go!","The aquarium is sparkling, it's so pretty!","I don't wanna stand in line...");
switch (MsgSelRsltGet()){
    case 0:
    DateRateSet(4);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoicePlay("B040403102_04_010");
    MsgDisp("Nanatsumori","A sushi restaurant in an aquarium? Damn.
That's too edgy! The person who came up
with that is a genius.");
    MsgDispSksp(1,0);
    MsgDateResultDisp();
    MsgDispSksp(0);
    break ;
    case 1:
    DateRateSet(3);
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("B040403102_04_020");
    MsgDisp("Nanatsumori","Wow, it's the jewelry illumination
aquarium. The collab between the fish and
the lights is incredible. Damn.");
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
        ChMotion(4,2,1);
        VoicePlay("B040403102_04_030");
        MsgDisp("Nanatsumori","Ah...right.
Then, let's just wander around then head
home.");
        MsgDateResultDisp();
        break ;
        case 4:
        case 5:
        DateRateSet(5);
        ChEye(4,2);
        ChMouth(4,2);
        ChMotion(4,2,1);
        VoicePlay("B040403102_04_040");
        MsgDisp("Nanatsumori","Ah...right.");
        MsgDisp("主人公","Ah, did you want to take a picture?
Then——");
        ChEye(4,0);
        ChMouth(4,4);
        ChMotion(4,0,1);
        VoicePlay("B040403102_04_050");
        MsgDisp("Nanatsumori","No, sorry.
I made you feel weird.");
        MsgDisp("主人公","But...");
        ChEye(4,4);
        ChMouth(4,4);
        ChMotion(4,1,1);
        VoicePlay("B040403102_04_060");
        MsgDisp("Nanatsumori","Look. If I'm causing you to make that
face, there was no point for me to have
come here today.");
        ChEye(4,2);
        ChMouth(4,4);
        ChMotion(4,2,1);
        VoicePlay("B040403102_04_070");
        MsgDisp("Nanatsumori","Things like trends and limited-time
exhibits. I take a picture of it, I share
it, I'm satisfied. This is all simply for
my own self satisfaction.");
        ChEye(4,0);
        ChMouth(4,4);
        ChMotion(4,0,1);
        ChEyeOpenLevel(4,10);
        VoicePlay("B040403102_04_080");
        MsgDisp("Nanatsumori","I'm not on this date now for the sake of
those kinds of things.");
        ChEyeOpenLevel(4,#1);
        MsgDisp("主人公","｛七ツ森＊｝...");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,1,1);
        VoicePlay("B040403102_04_090");
        MsgDisp("Nanatsumori","Nice, your face is all teary-eyed.
Should I take a picture?");
        MsgDisp("主人公","Eh...∋
Hey!");
        ChEye(4,4);
        ChMouth(4,3);
        ChMotion(4,3,1);
        ChCheek(4,5);
        VoicePlay("B040403102_04_100");
        MsgDisp("Nanatsumori","Ahaha! Okay, okay. I got to see the
expression I wanted to see today.");
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
