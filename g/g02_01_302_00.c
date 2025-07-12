MsgClose();
ChOpen(1,255,0,0,0,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("G020130200_01_000");
MsgDisp("Kazama","It must be tough, flying around,
glowing, without eating anything.");
MsgDisp("主人公","Right, they don't eat once they're grown.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020130200_01_010");
MsgDisp("Kazama","Yep, for weeks. I can't imagine doing
that, can you?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("G020130200_01_020");
MsgDisp("Kazama","If the cafeteria closed for a couple of
weeks, Haba High's students would lose it.");
MsgDisp("主人公","Yeah, they would.");
ChEye(1,0);
ChMouth(1,1);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("G020130200_01_030");
MsgDisp("Kazama","And for people who live alone like me, the
cafeteria's our lifeline.");
MsgDisp("主人公","Oh.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020130200_01_040");
MsgDisp("Kazama","Wait, I'm not asking you to do anything
for me, so don't worry about it.");
MsgDisp("主人公","Hahah, okay.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,1);
VoicePlay("G020130200_01_050");
MsgDisp("Kazama","So no pressure. But actually, joking
aside, I like the mood in the cafeteria.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020130200_01_060");
MsgDisp("Kazama","Lively meals really are great. Oh, and
also, you shouldn't underestimate the soba
there.");
MsgDisp("主人公","Yeah. The sets and the rice bowls, it's
all tasty.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,3);
ChEyeOpenLevel(1,8);
VoicePlay("G020130200_01_070");
MsgDisp("Kazama","There you go again. You're such a glutton,
like a little firefly grub.");
MsgDisp("主人公","Knock it off! 'Grub' is gross!");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020130200_01_080");
MsgDisp("Kazama","Really? Sorry.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020130200_01_090");
MsgDisp("Kazama","But you've always been glowing brightly
since before you were a grub, from when
you were an egg.");
MsgDisp("主人公","Huh?");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("G020130200_01_100");
MsgDisp("Kazama","The whole time, since we met ten years
ago. I guess since you've glowed for that
long, you'd get hungry.");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020130200_01_110");
MsgDisp("Kazama","I'm excited to go to the cafeteria
together.");
MsgDisp("主人公","(Right, ｛風真＊＊｝ lives alone. Of course
he'd want to have fun meals......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
