switch (ChPrmGet(8,6)){
    case 0:
    case 1:
    case 2:
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,0);
    VoicePlay("S060800001_08_000");
    MsgDisp("Shirahane","Whoa, a kimono!
That increases the New Years vibe.");
    MsgDisp("主人公","Thanks.");
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,4,1);
    ChEyeOpenLevel(8,0);
    ChCheek(8,5);
    VoicePlay("S060800001_08_010");
    MsgDisp("Shirahane","Super cute.
Eye candy▼");
    MsgDisp("主人公","(What a relief.
｛大地＊＊｝ seems really happy!)");
    break ;
    case 3:
    ChEye(8,0);
    ChMouth(8,3);
    ChMotion(8,0);
    VoicePlay("S060800001_08_020");
    MsgDisp("Shirahane","You dressed up?");
    MsgDisp("主人公","Yeah.
......Do you like it?");
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,4,1);
    ChEyeOpenLevel(8,0);
    ChCheek(8,5);
    VoicePlay("S060800001_08_030");
    MsgDisp("Shirahane","It's suits you perfectly. Cute.");
    MsgDisp("主人公","Thank you!");
    ChEye(8,3);
    ChMouth(8,3);
    ChMotion(8,3,1);
    VoicePlay("S060800001_08_040");
    MsgDisp("Shirahane","I'm so happy I get to walk around with a
beautiful girl on New Year's▼");
    MsgDisp("主人公","(What a relief.
｛大地＊＊｝ seems really happy!)");
    break ;
    case 4:
    case 5:
    ChEye(8,3);
    ChMouth(8,4);
    ChMotion(8,0);
    ChCheek(8,5);
    VoicePlay("S060800001_08_050");
    MsgDisp("Shirahane","It's really New Year's, huh.");
    MsgDisp("主人公","What do you think of the kimono?");
    ChEye(8,4);
    ChMouth(8,4);
    ChCheek(8,8);
    VoicePlay("S060800001_08_060");
    MsgDisp("Shirahane","It's the best.
I getta see my favorite person in such
fancy clothes......");
    MsgDisp("主人公","......Eh?");
    ChEye(8,0);
    ChMouth(8,4);
    ChMotion(8,1,1);
    ChEyeOpenLevel(8,10);
    ChCheek(8,10);
    VoicePlay("S060800001_08_070");
    MsgDisp("Shirahane","Huh? My mouth feels kind of loose
now......");
    ChEye(8,4);
    ChMouth(8,3);
    ChMotion(8,2,1);
    VoicePlay("S060800001_08_080");
    MsgDisp("Shirahane","Whatever, I can't help it!
When you're really beautiful like this, I
wanna give ya my honest opinion.");
    ChEye(8,3);
    ChMouth(8,0);
    ChMotion(8,4,1);
    ChEyeOpenLevel(8,0);
    VoicePlay("S060800001_08_090");
    MsgDisp("Shirahane","Hehe. The thought of walking around
together is making me grin.");
    MsgDisp("主人公","(What a relief.
｛大地＊＊｝ seems happy!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChCheek(8,0);
