BGOpen("sc810",0);
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    ChEye(5,4);
    VoicePlay("Q120500000_05_000");
    MsgDisp("Hiiragi","It was fun going around with you.");
    MsgDisp("主人公","I feel the same way. Thanks to you,
｛柊＊＊＊｝, I made wonderful memories.
Thank you!");
    ChEye(5,0);
    ChMotion(5,4);
    VoicePlay("Q120500000_05_010");
    MsgDisp("Hiiragi","This is my first school trip, and even
though I have nothing to compare it too,
it's still the best.");
    MsgDisp("主人公","Hehe!
I'm happy.");
    ChEye(5,0);
    ChMotion(5,0);
    VoicePlay("Q120500000_05_020");
    MsgDisp("Hiiragi","Let's enjoy the rest of the schedule.");
    MsgDisp("主人公","Yes!");
    break ;
    case 3:
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    VoicePlay("Q120500000_05_030");
    MsgDisp("Hiiragi","I never knew school trips could be so much
fun.");
    MsgDisp("主人公","Of course, it's your first time,
｛柊＊＊＊｝.");
    ChEye(5,3);
    ChMotion(5,4);
    VoicePlay("Q120500000_05_040");
    MsgDisp("Hiiragi","Yes. So I'm not able to compare, but it's
absolutely the best school trip I've ever
had.");
    MsgDisp("主人公","I'm glad.
I also really enjoyed spending the free
period with you, ｛柊＊＊＊｝.");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("Q120500000_05_050");
    MsgDisp("Hiiragi","I'm happy I'm not the only one getting
carried away.");
    MsgDisp("主人公","Hehe, getting carried away?");
    ChEye(5,3);
    ChMotion(5,3);
    Wait(20,1);
    VoicePlay("Q120500000_05_060");
    MsgDisp("Hiiragi","Yes.
I'm now totally a fan of Nagasaki and
school trips.");
    MsgDisp("主人公","(I think this is my first time seeing
｛柊＊＊＊｝ so happy...?
I'm glad we could spend it together!)");
    break ;
    case 4:
    case 5:
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,4,1);
    ChEyeOpenLevel(5,0);
    ScrFadeIn(0);
    VoicePlay("Q120500000_05_070");
    MsgDisp("Hiiragi","Tomorrow is the last day of the school
trip.");
    MsgDisp("主人公","｛柊＊＊＊｝?");
    ChEye(5,4);
    VoicePlay("Q120500000_05_080");
    MsgDisp("Hiiragi","Spending the free period with you was so
fun.");
    MsgDisp("主人公","It was fun for me too.");
    ChMotion(5,0);
    VoicePlay("Q120500000_05_090");
    MsgDisp("Hiiragi","I never got to go on an elementary or
middle school trip, but this one would
still beat them all.");
    MsgDisp("主人公","Hehe!
Nagasaki is really a nice place.");
    ChMotion(5,4);
    ChEyeOpenLevel(5,0);
    VoicePlay("Q120500000_05_100");
    MsgDisp("Hiiragi","That's right.
And you know, you wouldn't have been on
those old school trips with me either.");
    ChEye(5,3);
    ChMouth(5,4);
    ChMotion(5,0);
    VoicePlay("Q120500000_05_110");
    MsgDisp("Hiiragi","That's why right now is the best.");
    MsgDisp("主人公","｛柊＊＊＊｝...");
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,4);
    VoicePlay("Q120500000_05_120");
    MsgDisp("Hiiragi","The free period is over but the school
trip continues on.
Let's enjoy ourselves until the end.");
    MsgDisp("主人公","Yes!");
    MsgDisp("主人公","(Thank you, ｛柊＊＊＊｝!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
