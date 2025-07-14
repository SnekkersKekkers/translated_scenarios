switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,4);
    VoicePlay("L040200006_02_000");
    MsgDisp("Sassa","Ooh, amazing.");
    MsgDisp("主人公","If you're wondering, I did make these
myself......");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("L040200006_02_010");
    MsgDisp("Sassa","Yeah, I can see that
they're handmade.");
    MsgDisp("主人公","Um......
Don't worry, they're edible.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("L040200006_02_020");
    MsgDisp("Sassa","I know that.
Don't look so sad.
I'm happy about your feelings.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(Ha...... maybe I should've given him a
better chocolate......)");
    break ;
    case 3:
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,4);
    VoicePlay("L040200006_02_030");
    MsgDisp("Sassa","Handmade, huh......");
    MsgDisp("主人公","I did try my best......");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("L040200006_02_040");
    MsgDisp("Sassa","Yeah, I can feel your hard work.");
    MsgDisp("主人公","Sorry......");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("L040200006_02_050");
    MsgDisp("Sassa","Don't apologize. I'm happy that they're
handmade. Thanks.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(Ha...... Maybe I should've given him a
better chocolate......)");
    break ;
    case 4:
    case 5:
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("L040200006_02_060");
    MsgDisp("Sassa","This...... is handmade, right?");
    MsgDisp("主人公","Yeah...... Sorry that they're not that
good.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("L040200006_02_070");
    MsgDisp("Sassa","It's fine.
I kinda like how it feels like it's the
only one of its kind in the world.");
    MsgDisp("主人公","Geez, that's hardly a compliment, you
know?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("L040200006_02_080");
    MsgDisp("Sassa","In any case, I'm happy that you spent your
time on me. Thanks.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("L040200006_02_090");
    MsgDisp("Sassa","Even if it resulted in this.");
    MsgDisp("主人公","You don't have to force yourself to eat
it, okay?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("L040200006_02_100");
    MsgDisp("Sassa","You don't have to hold back.
Even if you didn't say anything, I'd eat
it, you know?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("L040200006_02_110");
    MsgDisp("Sassa","......Just checking, but there's nothing
but chocolate in it, right?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    BGMStop();
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(Ha...... Maybe I should've given him a
better chocolate......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
