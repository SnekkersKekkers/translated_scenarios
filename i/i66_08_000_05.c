MsgClose();
BGOpen("ar300",1);
ChLayout(1);
BGMPlay("BGM_C08_DAICHI_A",0.01);
ChOpen(8,35,0,0,0,-1,-1,0,0);
ScrFadeIn(0);
switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","The car wash and wax is done!");
    ChEye(8,3);
    ChMouth(8,3);
    VoicePlay("I660800005_08_000");
    MsgDisp("Shirahane","Okay, lemme check.
......Full marks!");
    MsgDisp("主人公","Yes!");
    VoicePlay("I660800005_39_000");
    MsgDisp("Male Customer","Ooh!
My car's looking nice and shiny!");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("I660800005_08_010");
    MsgDisp("Shirahane","Her techniques are top notch.
Come again!");
    VoicePlay("I660800005_39_010");
    MsgDisp("Male Customer","Yeah, this is amazing.
Take care of it next time too.");
    ChMotion(8,3,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("I660800005_08_020");
    MsgDisp("Shirahane","Thanks for your support!");
    SEPlay("EV_SE_589",1);
    Wait(50,0);
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("I660800005_08_030");
    MsgDisp("Shirahane","That customer sure was happy.
Good thing I trusted you with this.");
    MsgDisp("主人公","(Yay!
｛大地＊＊｝ praised me!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","The car wash and wax is done!");
    ChEye(8,3);
    ChMouth(8,3);
    VoicePlay("I660800005_08_040");
    MsgDisp("Shirahane","Okay!
Lemme check.");
    ChEye(8,0);
    ChMouth(8,0);
    ChMotion(8,0,1);
    ChEyeOpenLevel(8,10);
    VoicePlay("I660800005_08_050");
    MsgDisp("Shirahane","Ooh!
Not a single smudge in sight......
A full 100 points!");
    ChEyeOpenLevel(8,-1);
    MsgDisp("主人公","Yay!");
    VoicePlay("I660800005_39_020");
    MsgDisp("Male Customer","Wow!
My car looks good as new∋");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("I660800005_08_060");
    MsgDisp("Shirahane","Leave it t'us!
With her techniques, any car can look
good as new～!");
    MsgDisp("主人公","That's......");
    VoicePlay("I660800005_39_030");
    MsgDisp("Male Customer","It really is amazing.
I'll ask for you again, pretty lady.");
    ChEye(8,4);
    ChMouth(8,2);
    ChMotion(8,4,1);
    ChEyeOpenLevel(8,7);
    VoicePlay("I660800005_08_070");
    MsgDisp("Shirahane","That's no good, sir.
You should be leaving with a clean
car and heart.");
    VoicePlay("I660800005_39_040");
    MsgDisp("Male Customer","Sorry, sorry, Dai-chan.
Well, I'll ask for her again next time!");
    SEPlay("EV_SE_589",1);
    Wait(50,0);
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("I660800005_08_080");
    MsgDisp("Shirahane","Ah no. Can't let my guard down when you're
doing this good. I'm in trouble......");
    MsgDisp("主人公","(So he's saying I'm doing well?
But I wonder why he needs his guard up?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0);
