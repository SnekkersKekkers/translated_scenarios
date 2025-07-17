MsgClose();
ChOpen(1,255,7,0,0,#1,#1,0,0);
ChMotion(1,1);
VoicePlay("G020140000_01_000");
MsgDisp("Kazama","When I think about how each of these
lights is a life, that's a bit scary.");
MsgDisp("主人公","Yeah, but that might be why they're
beautiful.");
ChMotion(1,0);
ChEyeOpenLevel(1,0);
Wait(12,0);
ChEye(1,0);
ChMouth(1,3);
VoicePlay("G020140000_01_010");
MsgDisp("Kazama","Wow, that's a good one-liner.
I think so too.");
ChEye(1,4);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("G020140000_01_020");
MsgDisp("Kazama","They're all doing their very best to glow.");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("G020140000_01_030");
MsgDisp("Kazama","Hey, how would you rank them?");
MsgDisp("主人公","Rank them?");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020140000_01_040");
MsgDisp("Kazama","Yeah, 'cause if you don't rank them, you
can't choose the one.");
ChEye(1,4);
ChMouth(1,2);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020140000_01_050");
MsgDisp("Kazama","With entrances exams, sports tournaments,
and competitions, they come with a ranking
so it's easy. And there're ways to
improve.");
ChEye(1,0);
ChMouth(1,2);
ChMotion(1,0);
VoicePlay("G020140000_01_060");
MsgDisp("Kazama","But how do you decide your life partner
out of all your options?");
MsgDisp("主人公","Ummm, ｛風真＊＊｝?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,8);
VoicePlay("G020140000_01_070");
MsgDisp("Kazama","I can work at my studies and athletics.
But that's not it, right? It's scary, not
knowing what to do, how to focus my
efforts.");
ChEye(1,2);
ChMouth(1,0);
ChMotion(1,1);
ChEyeOpenLevel(1,0);
VoicePlay("G020140000_01_080");
MsgDisp("Kazama","And I'm sure the fireflies here would have
a bit of an easier time too if you'd tell
them the rules and criteria...");
MsgDisp("主人公","(｛風真＊＊｝...
It doesn't sound like you're talking about
fireflies...)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
