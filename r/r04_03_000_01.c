ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0,1);
ChLayout(1);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChMouth(3,0);
    VoicePlay("R040300001_03_000");
    MsgDisp("Honda","You must be the princess here.");
    MsgDisp("主人公","Huh?");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("R040300001_03_010");
    MsgDisp("Honda","It suits the atmosphere of this castle
very well.");
    MsgDisp("主人公","No way...");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("R040300001_03_020");
    MsgDisp("Honda","Then I must be the prince.
Well, becoming the king is also an option.");
    break ;
    case 3:
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("R040300001_03_030");
    MsgDisp("Honda","But I managed to find you because you were
shining the brightest.");
    MsgDisp("主人公","Huh?");
    ChSet(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("R040300001_03_040");
    MsgDisp("Honda","This place looks like a castle, so you
look like a real princess!");
    MsgDisp("主人公","Really?
Thank you!");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0,1);
    VoicePlay("R040300001_03_050");
    MsgDisp("Honda","Since that's the case, shouldn't I be
escorting you, the princess?");
    MsgDisp("主人公","Hehe!");
    break ;
    case 4:
    case 5:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("R040300001_03_060");
    MsgDisp("Honda","And you are the main princess.");
    MsgDisp("主人公","Huh, me?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,0,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("R040300001_03_070");
    MsgDisp("Honda","Yeah. You can tell who the main heroine is
because she would shine the brightest
here.");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("R040300001_03_080");
    MsgDisp("Honda","It's not just the dress either, you
yourself are sparkling.");
    MsgDisp("主人公","No way... you're giving me too much
credit.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,1,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("R040300001_03_090");
    MsgDisp("Honda","I'm serious.
Your modesty is the main factor why!");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,0,1);
    VoicePlay("R040300001_03_100");
    MsgDisp("Honda","... I'm going to be your prince.
Definitely.");
    MsgDisp("主人公","?");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
