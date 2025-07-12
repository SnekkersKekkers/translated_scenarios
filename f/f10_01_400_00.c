BGOpen("sc310",0);
ChLayout(1);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(1,254,0,0,2,#1,#1,0,1);
ChOpen(2,254,3,0,4,#1,#1,0,2);
ScrFadeIn(0);
VoiceEVSPlay(2);
VoicePlay("F100140000_02_000");
MsgDisp("Sassa","｛主人公｝.
Good timing.");
MsgDisp("主人公","｛颯砂＊＊｝, ｛風真＊＊｝.
What's up with you two?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("F100140000_02_010");
MsgDisp("Sassa","Ryota's making up stories again.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,3);
VoicePlay("F100140000_01_000");
MsgDisp("Kazama","They're true.
You just forgot.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("F100140000_02_020");
MsgDisp("Sassa","Do you remember?
The spinning top contest in
kindergarten.");
MsgDisp("主人公","Spinning top contest...?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
VoicePlay("F100140000_01_010");
MsgDisp("Kazama","It happened, you guys just don't
remember anything.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("F100140000_02_030");
MsgDisp("Sassa","Ryota is just special.");
MsgDisp("主人公","What kind of contest was it?");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,0);
VoicePlay("F100140000_01_020");
MsgDisp("Kazama","We painted our tops, and then everyone
started spinning them at the same time.
The one whose spun the longest won.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("F100140000_02_040");
MsgDisp("Sassa","Then, Ryota's top spun till the end
until I stopped it with my hand.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("F100140000_01_030");
MsgDisp("Kazama","Well, I knew I'd won, but I just wanted
to see how long it'd spin.");
ChEyeOpenLevel(1,#1);
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
ChEyeOpenLevel(2,7);
VoicePlay("F100140000_02_050");
MsgDisp("Sassa","How do you remember it so well?");
MsgDisp("主人公","Yeah, the strength of your memory's
incredible.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(16,0);
ChEye(1,2);
ChMouth(1,2);
VoicePlay("F100140000_01_040");
MsgDisp("Kazama","...I guess that means you don't remember
either. Well, that's enough.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1);
ChPosition(2,0);
Wait(60,0);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("F100140000_02_060");
MsgDisp("Sassa","He left.
Maybe we can talk about it next time?");
MsgDisp("主人公","(He's still the same...
But ｛風真＊＊｝, he really does remember
when we were little kids.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
