MsgClose();
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
VoicePlay("G020210304_02_000");
MsgDisp("Sassa","Hey do you remember the birthday present I
gave you?");
MsgDisp("主人公","Of course.
I was super happy.");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("G020210304_02_010");
MsgDisp("Sassa","I see.
When I was picking it out, the store clerk
asked me a bunch of questions");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,2);
VoicePlay("G020210304_02_020");
MsgDisp("Sassa","They were nice about it and all, but I
wanted to choose it myself.");
MsgDisp("主人公","Hehe.
It was ｛颯砂＊＊｝ who picked it
for me right?");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("G020210304_02_030");
MsgDisp("Sassa","Yeah. But I wondered if it would have been
better to give you something that's in
fashion for girls.");
MsgDisp("主人公","Something ｛颯砂＊＊｝ likes
would be better.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,0);
VoicePlay("G020210304_02_040");
MsgDisp("Sassa","Really? Oh, I mean what I think would make
you happy. Not what I like.");
MsgDisp("主人公","Yeah, if it's something
｛颯砂＊＊｝ likes, wouldn't it
be better if I gave it as a present?");
ChEye(2,0);
ChMouth(2,2);
ChMotion(2,3);
ChCheek(2,10);
VoicePlay("G020210304_02_050");
MsgDisp("Sassa","Seriously?
Something I like......");
MsgDisp("主人公","?");
ChEye(2,5);
ChMouth(2,4);
ChMotion(2,5);
VoicePlay("G020210304_02_060");
MsgDisp("Sassa","No, no, I just had a bit of a stupid
thought.
Oh, I need to cool my head!");
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
ChClose(2);
MsgDisp("主人公","(Eh, what's wrong?
｛颯砂＊＊｝......)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChLayout(1);
ChOpen(2,253,0,0,0,#1,#1,0,0);
