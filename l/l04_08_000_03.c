switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    ChEye(8,0);
    ChMouth(8,5);
    ChMotion(8,1,1);
    ChEyeOpenLevel(8,10);
    VoicePlay("L040800003_08_000");
    MsgDisp("Shirahane","Is this handmade chocolate?");
    MsgDisp("主人公","Yeah, I did my best.");
    ChEye(8,4);
    ChMouth(8,0);
    ChMotion(8,0,1);
    VoicePlay("L040800003_08_010");
    MsgDisp("Shirahane","Amazin'.
It's right up my alley.");
    MsgDisp("主人公","Really?");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("L040800003_08_020");
    MsgDisp("Shirahane","Yeah. I'm gonna savor this at home.
Thanks!");
    MsgDisp("主人公","(Thank goodness.
He seemed to like it!)");
    break ;
    case 3:
    ChEye(8,0);
    ChMouth(8,5);
    ChMotion(8,1,1);
    ChEyeOpenLevel(8,10);
    VoicePlay("L040800003_08_030");
    MsgDisp("Shirahane","Handmade chocolate!");
    MsgDisp("主人公","Yeah, I did my best!");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,2,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("L040800003_08_040");
    MsgDisp("Shirahane","Heheh, I'm stoked.
Handmade, huh......");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("L040800003_08_050");
    MsgDisp("Shirahane","I like the toppings, too.
Th' heck, I'm gonna brag to everyone!");
    MsgDisp("主人公","(Thank goodness!
He seemed really happy!)");
    break ;
    case 4:
    case 5:
    ChEye(8,3);
    ChMouth(8,5);
    ChMotion(8,1,1);
    ChEyeOpenLevel(8,10);
    ChCheek(8,8);
    VoicePlay("L040800003_08_060");
    MsgDisp("Shirahane","Ah!");
    MsgDisp("主人公","Huh?
Wh, what's wrong?");
    ChMouth(8,4);
    VoicePlay("L040800003_08_070");
    MsgDisp("Shirahane","A real handmade chocolate......
You thought of me, huh?
Your heart's in these.");
    MsgDisp("主人公","Yeah. I made it just for you,
｛大地＊＊｝.");
    ChMouth(8,4);
    ChMotion(8,2,1);
    VoicePlay("L040800003_08_080");
    MsgDisp("Shirahane","Just...... me?
F'real?");
    MsgDisp("主人公","Yeah.");
    ChEye(8,4);
    ChMouth(8,3);
    ChMotion(8,0,1);
    VoicePlay("L040800003_08_090");
    MsgDisp("Shirahane","Thanks.
I'll treasure it forever.");
    MsgDisp("主人公","S-Sure.
But, try to eat it soon, okay?");
    ChEye(8,2);
    ChMouth(8,0);
    ChMotion(8,4,1);
    VoicePlay("L040800003_08_100");
    MsgDisp("Shirahane","Ah, you're right......
But it'd be a waste to just eat it.
What should I do?");
    MsgDisp("主人公","(He seemed really happy!
Thank goodness!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(8,0,0);
