BGOpen("ho000",0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    ScrFadeIn(0);
    VoicePlay("S120700005_07_000");
    MsgDisp("Mikage","It's over.
Give my regards to your family.");
    MsgDisp("主人公","Yep. Thank you very much for today. And
thank you for taking me on my last shrine
visit...");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("S120700005_07_010");
    MsgDisp("Mikage","You...
Stop it, you idiot.
You're two months too early!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S120700005_07_020");
    MsgDisp("Mikage","You really haven't changed at all in these
three years, huh?");
    MsgDisp("主人公","Eh...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("S120700005_07_030");
    MsgDisp("Mikage","Save all your thoughts and true feelings
for after the graduation ceremony, or else
it's just a waste.");
    MsgDisp("主人公","A waste?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("S120700005_07_040");
    MsgDisp("Mikage","That's right. Build it up and then let it
all out. That way you'll create a memory
you will never forget.");
    MsgDisp("主人公","But...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S120700005_07_050");
    MsgDisp("Mikage","If you don't listen, I'll make you repeat
the year for disobeying my orders okay?");
    MsgDisp("主人公","Ehh∋");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("S120700005_07_060");
    MsgDisp("Mikage","If you don't want that, just go home
quietly, understood?");
    MsgDisp("主人公","Hehe, okay.");
    MsgClose();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    Wait(30);
    MsgDisp("主人公","(My high school days will be over in the
spring...like
｛御影＊＊｝ said, let's
spend the rest of it without any regrets!)");
    break ;
    case 4:
    case 5:
    MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
    MsgClose();
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    ScrFadeIn(0);
    VoicePlay("S120700005_07_070");
    MsgDisp("Mikage","...That time is upon us.");
    MsgDisp("主人公","Yep, thank you for taking me.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("S120700005_07_080");
    MsgDisp("Mikage","I can't go on any further.");
    MsgDisp("主人公","Ah...further?");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S120700005_07_090");
    MsgDisp("Mikage","I'm not graduating, I have to stay at
school.");
    MsgDisp("主人公","Oh, I see...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("S120700005_07_100");
    MsgDisp("Mikage","Ahh, even after you guys graduate, it
feels like I'll be stuck here forever.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("S120700005_07_110");
    MsgDisp("Mikage","It's the same as the plants in the
gardening club, growing roots holding them
in place...");
    MsgDisp("主人公","｛御影＊＊｝?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("S120700005_07_120");
    MsgDisp("Mikage","Don't make that face.
This is what I wanted.
You can come visit me anytime.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("S120700005_07_130");
    MsgDisp("Mikage","I'll be here waiting, sleeping in the
vines.");
    MsgDisp("主人公","Like a character out of a fairytale, huh?");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("S120700005_07_140");
    MsgDisp("Mikage","Maybe I'll get added to our school's
legends...?
Let's move on.");
    MsgClose();
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    Wait(30);
    MsgDisp("主人公","(｛御影＊＊｝ seems a little sad...
But I'm glad I could go with him for my
final shrine visit.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
