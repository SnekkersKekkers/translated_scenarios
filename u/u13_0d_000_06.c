MsgDisp("主人公","｛御影＊＊｝, I
guess...");
StlEyeOpenLevel(21,#1);
StlMouthOpenLevel(21,#1);
StlNear(0,0,15);
StlEyeOpenLevel(22,#1);
StlMouthOpenLevel(22,#1);
StlCheek(22,0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    StlEye(22,0);
    StlEyeOpenLevel(22,5);
    StlMouth(22,2);
    StlEye(21,2);
    StlMouth(21,0);
    VoicePlay("U130D00006_21_000");
    MsgDisp("Michiru","Hehe.
Is that so?");
    StlEye(22,1,0);
    StlEyeOpenLevel(22,0,1);
    StlMouth(22,1);
    VoicePlay("U130D00006_22_000");
    MsgDisp("Hikaru","It's a bumpy road ahead～ But you know,
Mikage-sensei is also still a child at
heart. So, perhaps...");
    StlEyeOpenLevel(22,#1);
    StlMouth(22,0);
    StlEye(21,0);
    VoicePlay("U130D00006_21_010");
    MsgDisp("Michiru","For now, I think it's important to be a
good student to Mikage-sensei.");
    MsgDisp("主人公","(Falling in love with a teacher can be
difficult.
Be a good student, huh...)");
    break ;
    case 3:
    StlEye(22,1);
    StlEyeOpenLevel(22,5);
    StlMouth(22,1);
    StlEye(21,0);
    StlEyeOpenLevel(21,5);
    StlMouth(21,0);
    VoicePlay("U130D00006_21_020");
    MsgDisp("Michiru","I see.
I love what you have with Mikage-sensei.");
    StlEye(22,0);
    StlMouth(22,1);
    VoicePlay("U130D00006_22_010");
    MsgDisp("Hikaru","Hikaru supports it too, romance between a
student and teacher.");
    StlEyeOpenLevel(21,0,1);
    MsgDisp("主人公","Oh, thank you.");
    StlEyeOpenLevel(22,5,1);
    StlMouth(22,0);
    VoicePlay("U130D00006_22_020");
    MsgDisp("Hikaru","As of now, I don't think that
Mikage-sensei has any special feelings for
Mari, but he does like Mari.♪");
    StlEyeOpenLevel(21,5,1);
    StlMouth(21,0);
    VoicePlay("U130D00006_21_030");
    MsgDisp("Michiru","You should continue to be a good student
to him and treat him a little.");
    MsgDisp("主人公","(Be a good student, huh.
Ok, I'll try my best!)");
    break ;
    case 4:
    case 5:
    StlEye(22,0);
    StlMouth(22,0);
    StlEye(21,0);
    StlEyeOpenLevel(21,0);
    StlMouth(21,0);
    VoicePlay("U130D00006_21_040");
    MsgDisp("Michiru","Mikage-sensei is really starting to notice
Mari.");
    StlEyeOpenLevel(21,5,1);
    StlEye(22,2);
    StlCheek(22,5);
    VoicePlay("U130D00006_22_030");
    MsgDisp("Hikaru","Uh-huh!");
    StlEye(22,0);
    StlMouth(22,1);
    StlCheek(22,0);
    VoicePlay("U130D00006_22_040");
    MsgDisp("Hikaru","Hikaru was really surprised.
His usual delinquent behavior is a facade.
Deep down he's quite serious, right?");
    StlEye(21,2);
    StlMouth(21,0);
    VoicePlay("U130D00006_21_050");
    MsgDisp("Michiru","He seems to be a bit worried about his
first love and the conflict it has with
his position.");
    StlEyeOpenLevel(22,5,1);
    StlMouth(22,1);
    VoicePlay("U130D00006_22_050");
    MsgDisp("Hikaru","Mari.
To make this love fruitful you will need
to be mindful of his feelings.");
    StlEye(21,0,0);
    StlEyeOpenLevel(21,10,1);
    VoicePlay("U130D00006_21_060");
    MsgDisp("Michiru","That's right.
Take his position into consideration and
be mindful of how he feels, okay?");
    MsgDisp("主人公","(It's important to be considerate in a
student-teacher relationship, huh?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
