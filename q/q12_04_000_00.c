BGOpen("sc810",0);
switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    ScrFadeIn(0);
    VoicePlay("Q120400000_04_000");
    MsgDisp("Nanatsumori","Here we are.");
    MsgDisp("主人公","So this is the end of the school
trip......");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("Q120400000_04_010");
    MsgDisp("Nanatsumori","Pfft!
What's that expression.");
    MsgDisp("主人公","Eh?");
    ChMotion(4,0,1);
    VoicePlay("Q120400000_04_020");
    MsgDisp("Nanatsumori","We'll see each other again at school.
Stop making such a lonely face.");
    MsgDisp("主人公","Yeah, right?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("Q120400000_04_030");
    MsgDisp("Nanatsumori","Right. See ya then. Thanks to you, I
enjoyed the school trip.");
    break ;
    case 3:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    ScrFadeIn(0);
    MsgDisp("主人公","Haah......
I'm at the hotel.");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,1,1);
    VoicePlay("Q120400000_04_040");
    MsgDisp("Nanatsumori","Did you want to play more?");
    MsgDisp("主人公","It's not playing, we're spending our free
period together. Right?");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("Q120400000_04_050");
    MsgDisp("Nanatsumori","True.");
    ChEye(4,0);
    VoicePlay("Q120400000_04_060");
    MsgDisp("Nanatsumori","Thanks to your presence, I enjoyed the
school trip more than I thought I would.");
    MsgDisp("主人公","Me too.
I had a great time.");
    ChMotion(4,0,1);
    VoicePlay("Q120400000_04_070");
    MsgDisp("Nanatsumori","Well, I guess we're both satisfied with
the result. Make sure to rest well. I'll
see you later.");
    break ;
    case 4:
    case 5:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0);
    ScrFadeIn(0);
    VoicePlay("Q120400000_04_080");
    MsgDisp("Nanatsumori","It's over......");
    MsgDisp("主人公","Yeah......");
    ChEye(4,4);
    ChMouth(4,2);
    VoicePlay("Q120400000_04_090");
    MsgDisp("Nanatsumori","Did you have fun?
Free time.");
    MsgDisp("主人公","Eh?");
    ChMotion(4,0,1);
    VoicePlay("Q120400000_04_100");
    MsgDisp("Nanatsumori","Look, I'm not a very active person in
stuff like school events.");
    ChMotion(4,1,1);
    VoicePlay("Q120400000_04_110");
    MsgDisp("Nanatsumori","I wondered if you actually wanted to go
around more other places.");
    MsgDisp("主人公","And you, ｛七ツ森＊｝?");
    ChMotion(4,0,1);
    VoicePlay("Q120400000_04_120");
    MsgDisp("Nanatsumori","Eh......");
    MsgDisp("主人公","Did you not enjoy the free period?");
    ChEye(4,1);
    ChMouth(4,4);
    VoicePlay("Q120400000_04_130");
    MsgDisp("Nanatsumori","I had so much fun.
I really appreciate you being with me.");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,3,1);
    VoiceEVSPlay(4);
    VoicePlay("Q120400000_04_140");
    MsgDisp("Nanatsumori","｛主人公｝...... thank you.");
    MsgDisp("主人公","That's my line.
Thank you, ｛七ツ森＊｝.");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,2,1);
    ChCheek(4,5);
    VoicePlay("Q120400000_04_150");
    MsgDisp("Nanatsumori","Haha......
Kinda embarrassing, huh?");
    MsgDisp("主人公","Hehe!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
