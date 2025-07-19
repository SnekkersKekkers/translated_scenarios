ChLayout(1);
BGOpen("wf000",1);
ScrFadeIn(0);
MsgDisp("主人公","(Well, I guess it's time to go home.
Huh?
What's that on the other side——)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(7,255,0,0,0,#1,#1,0,1,0,30);
ChOpen(2,255,0,0,4,#1,#1,0,2,0,30);
MsgDisp("主人公","｛御影＊＊｝, ｛颯砂＊＊｝!
Are you two out together?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010720200_02_000");
MsgDisp("Sassa","Yo.
I just bumped into Mikage-sensei.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010720200_07_000");
MsgDisp("Mikage","I happened to be near an outdoor equipment
store.");
MsgDisp("主人公","I see.
Your hobbies are almost similar.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("E010720200_02_010");
MsgDisp("Sassa","Similar hobbies?
Come to think of it, we were at the pet
store together the other day...");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
ChEyeOpenLevel(7,8);
VoicePlay("E010720200_07_010");
MsgDisp("Mikage","Yeah I remember seeing Sassa playing with
a dog.");
ChEye(2,0);
ChMouth(2,3);
ChMotion(2,4);
VoicePlay("E010720200_02_020");
MsgDisp("Sassa","Do you also like animals, Mikage-sensei?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
ChEyeOpenLevel(7,10);
VoicePlay("E010720200_07_020");
MsgDisp("Mikage","Thats right.
We both like animals and the outdoors...
We have quite a lot in common.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("E010720200_02_030");
MsgDisp("Sassa","Wow, I'm so happy we have a lot in common,
Mikage-sensei.");
MsgDisp("主人公","Hehe, that's nice.");
ChEye(7,0);
ChMouth(7,4);
ChMotion(7,2);
VoicePlay("E010720200_07_030");
MsgDisp("Mikage","...Hmm I think Sassa and I have other
similarities too...");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("E010720200_02_040");
MsgDisp("Sassa","Eh, you mean like...
Tall and curly hair?");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,0);
VoicePlay("E010720200_07_040");
MsgDisp("Mikage","Hahaha, that's it.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("E010720200_07_050");
MsgDisp("Mikage","Well, the sun is about to set.
Shall we all head home?");
MsgDisp("主人公","Okay!");
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(7);
ChPosition(2,0);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,8);
VoicePlay("E010720200_02_050");
MsgDisp("Sassa","I think there's another thing in common...");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,5);
VoicePlay("E010720200_02_060");
MsgDisp("Sassa","——Ah.");
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
BGMStop();
ChClose(2);
VoicePlay("E010720200_02_070");
MsgDisp("Sassa","Track and Field!
Isn't Mikage-sensei also in the Track and
Field club?");
VoicePlay("E010720200_07_060");
MsgDisp("Mikage","Oh right.
I completely forgot.");
MsgDisp("主人公","(They both forgot he's the Track and Field
advisor? Maybe that's another similarity
of theirs...)");
MsgClose();
ScrFadeOut(0,0);
