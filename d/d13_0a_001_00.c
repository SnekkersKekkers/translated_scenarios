MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("sc771",2);
ChLayout(2);
MsgClose();
ChOpen(1,34,0,0,0,#1,#1,0,0,0,30);
ChOpen(2,34,0,0,4,#1,#1,0,1,0,30);
ChOpen(6,34,0,0,0,#1,#1,0,2,0,30);
ScrFadeIn(0);
MsgDisp("主人公","We're all gathered here, huh?
...Hehe!");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("D130A00100_01_000");
MsgDisp("Kazama","What's strange about that?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D130A00100_06_000");
MsgDisp("Himuro","Yeah.
Is there something funny about it?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("D130A00100_02_000");
MsgDisp("Sassa","I kind of get what you mean.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("D130A00100_06_010");
MsgDisp("Himuro","Eh, what's with that?");
ChEye(1,4);
ChMouth(1,0);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("D130A00100_01_010");
MsgDisp("Kazama","That's just how Sassa is.");
ChEye(2,4);
ChMouth(2,3);
ChMotion(2,3);
VoicePlay("D130A00100_02_010");
MsgDisp("Sassa","After all, the three of us are lined up in
our best suits.
If it were me, I would probably laugh too?");
MsgDisp("主人公","Hehe, yeah.
You all look cool though.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("D130A00100_01_020");
MsgDisp("Kazama","\"You all\"?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("D130A00100_06_020");
MsgDisp("Himuro","Ryota senpai has that kind of thing
doesn't he?");
ChEyeOpenLevel(1,0);
ChCheek(1,5);
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("D130A00100_02_020");
MsgDisp("Sassa","Right right.
Where he always wants to be number one?");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,8);
ChCheek(1,0);
VoicePlay("D130A00100_01_030");
MsgDisp("Kazama","Shut up.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("D130A00100_06_030");
MsgDisp("Himuro","Then let's have our rankings be defined
clearly right here, right now.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4,1);
VoicePlay("D130A00100_02_030");
MsgDisp("Sassa","Sounds good!");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(24,0);
ChEye(1,0);
ChMouth(1,2);
VoicePlay("D130A00100_01_040");
MsgDisp("Kazama","Yeah.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,4);
VoicePlay("D130A00100_06_040");
MsgDisp("Himuro","Then, if you would please.");
MsgDisp("主人公","(Ehh∋
You can't just ask me something like that
so suddenly...)");
BGMStop();
MsgClose();
ScrFadeOut(0);
ChLayout(1);
ChClose(1,0,0);
ChClose(2,0,0);
ChClose(6,0,0);
