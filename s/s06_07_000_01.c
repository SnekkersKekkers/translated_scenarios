switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("S060700001_07_000");
    MsgDisp("Mikage","Oh, beautiful～♪");
    MsgDisp("主人公","Hehe!
I tried wearing a kimono.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("S060700001_07_010");
    MsgDisp("Mikage","Inside there is sweet pea, right?");
    MsgDisp("主人公","(Yay!
Wearing a kimono was the right choice!)");
    break ;
    case 3:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("S060700001_07_020");
    MsgDisp("Mikage","Ohh, that's beautiful, the kimono.");
    MsgDisp("主人公","......Uhm, my kimono?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("S060700001_07_030");
    MsgDisp("Mikage","Ah, my bad.
What's wrong with me.
You look gorgeous in a kimono, huh?");
    MsgDisp("主人公","Hehe, thank you!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S060700001_07_040");
    MsgDisp("Mikage","I saw something nice early this year.
It's a good omen that good things will
happen this year too.");
    MsgDisp("主人公","(Yay!
I was praised by
｛御影＊＊｝......! )");
    break ;
    case 4:
    case 5:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0,1);
    VoicePlay("S060700001_07_050");
    MsgDisp("Mikage","This year is off to a great start♪");
    MsgDisp("主人公","Eh?
Why is that?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("S060700001_07_060");
    MsgDisp("Mikage","Seeing sweet pea like this so early in the
year is so nice, isn't it?");
    MsgDisp("主人公","Hehe, yay!
It was worth it to wear the kimono.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,1);
    VoicePlay("S060700001_07_070");
    MsgDisp("Mikage","The kimono is definitely beautiful, but
sweet peas are fine in whatever they wear.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("S060700001_07_080");
    MsgDisp("Mikage","Even in a wooden box or covered in mud,
they are still great vegetables, aren't
they?");
    MsgDisp("主人公","Uhm, vegetables......?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("S060700001_07_090");
    MsgDisp("Mikage","Ahh, I'm so proud.");
    MsgDisp("主人公","(｛御影＊＊｝ seems really happy about it.
But vegetables......?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChEye(7,#1);
ChMouth(7,#1);
